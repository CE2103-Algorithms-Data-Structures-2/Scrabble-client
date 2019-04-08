#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Interface_Logic/Manager/Manager.h>
#include <QtWidgets/QLabel>
#include "../Interface_Logic/Board_Logic/CasillaGrafica.h"
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


    static const int boardSquareDimension = 15;
    static const int numFichasPorJugador = 7;
    const int tileSize = 47;
    std::string ChipsPath = "../AssetsScrabble/LetrasScrabble/";

    /**
     * Array de casillas graficas. Componen el tablero que se presenta en GameBoard.
     */
    CasillaGrafica* board_matrix[boardSquareDimension][boardSquareDimension];

    /**
     * Array de tile labels. Almacena labels que representan las fichas que le pertenecen al jugador.
     */
    QLabel* fichas_array[numFichasPorJugador];

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    /**
     * Cada vez que un jugador utiliza fichas, se encarga de actualizarlas según las indicaciones
     * del servidor.
     */
    void actualizarFichas();

    /**
     * Instancia de Manager que permite la comunicacion con el servidor.
     */
    static Manager* Wmanager;

private slots:
    /**
     * Rellena el tablero con las casillas necesarias (CasillaGrafica)
     *
     */
    void setUp();

    /**
     * Pasa del MenuPrincipal al ConfigMenu donde se puede crear una partida.
     */
    void on_pushButton_9_clicked();

    /**
     * Pasa del MenuPrinciparl al JoinMenu donde se puede unir a una partida.
     */
    void on_pushButton_10_clicked();

    /**
     * De haberse llenados los campos en el ConfigMenu, envia los datos al servidor
     * para crear una nueva partida. De otro modo, indica que se deben llenar los campos vacios.
     */
    void on_pushButton_14_clicked();

    /**
     * Permite ingresar el codigo de la partida a la que se desea unir el jugador
     */
    void on_lineEdit_returnPressed();

    /**
     * Permite volver al MenuPrincpal al ganar una partida.
     */
    void on_pushButton_11_clicked();

    /**
     * Permite volver al MenuPrincipal despues al perder una partida.
     */
    void on_pushButton_13_clicked();

    /**
     * De completarse la informacion solicitada, la envia al servidor para permitirle al jugador
     * unirse a la partida del codigo ingresado. De lo contrario solicita completar la informacion faltante.
     */
    void on_pushButton_clicked();

    /**
     * Permite ingresar el nombre con que se quiere identicar el jugador que se une a una partida.
     */
    void on_lineEdit_4_returnPressed();

    /**
     * De estar la cantidad de jugadores necesaria y ser el anfitrion, comienza la partida y envia todos los
     * jugadores al tablero del juego.
     */
    void on_pushButton_2_clicked();

    /**
     * Permite devolverse al MenuPrincipal desde el ConfigMenu.
     */
    void on_pushButton_5_clicked();

    /**
     * Permite devolverse al MenuPrincipal desde el JoinMenu.
     */
    void on_pushButton_8_clicked();

    /**
     * Permite regresar el MenuPrincipal desde el WaitMenu
     */
    void on_pushButton_12_clicked();


private:
    Ui::MainWindow *ui;

    /**
     * Crea un thread que se encarga de esperar la llegada de jugadores al lobbyy. Cada vez que uno se
     * conecta, se presenta la informacion en la pantalla sobre el jugador.
     */
    void LobbyUpdater();

    /**
     * Al recibir una senal del servidor que indica que el anfitrion exitosamente inicio la partida,
     * cambia todas las escenas de los jugadores al GameBoard.
     */
    void isTriggered();

    /**
     * Ejecuta LobbyUpdater() y isTriggered()
     */
    void play();

    /**
     * Genera la animacion al arrastrar una ficha por la pantalla
     */
    void createDrag(const QPoint &pos, QWidget *widget);

protected:
    /**
     * Al presionar el mouse, genera las condiciones necesarias para arrastrar la ficha
     */

    void mousePressEvent(QMouseEvent *event);

    /**
     * Al soltar una ficha, le comunica la informacion sobre ella a la casilla donde se encuentre y la acepta
     */
    void dropEvent(QDropEvent *event);

    /**
     * Genera cambios en la ficha al ser arrastrada
     * @param event
     */
    void dragEnterEvent(QDragEnterEvent *event);

    /**
     * Muestra graficamente una ficha que representa la ficha inicial del jugador para
     * determinar el orden en que jgara
     */
    void displayFichaDesenbolzada(char letra, QLabel* label);

    /**
     * Muestra graficamente las fichas dadas de cada jugador
     */
    void gameSetter();

    void chipSetter();
};

#endif // MAINWINDOW_H
