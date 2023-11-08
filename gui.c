#include "gui.h"

//Function to create button at pos(x,y)
static void createButton(GtkWidget *button, gchar *label, GtkWidget *container, int x, int y, int sizex, int sizey){
    button = gtk_button_new_with_label(label);
    gtk_fixed_put(GTK_FIXED(container), button, x, y);
    gtk_widget_set_size_request(button, sizex, sizey);
}

void createCalculator(){
    //Initializing the environment
    gtk_init(0,NULL);
    //Creation and Initialization of calculator
    GtkWidget *calculator;
    calculator = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(calculator), "calculator");
    gtk_window_set_default_size(GTK_WINDOW(calculator),285,400);
    gtk_window_set_resizable(GTK_WINDOW(calculator),FALSE);
    gtk_window_get_focus(GTK_WINDOW(calculator));
    g_signal_connect(calculator,"destroy",gtk_main_quit,NULL); //Shut Down
    //Creation of numpad and screen
    GtkWidget *numpad,*screen,*separation;
    separation = gtk_paned_new(GTK_ORIENTATION_VERTICAL);
    numpad = gtk_fixed_new();
    screen = gtk_box_new(GTK_ORIENTATION_HORIZONTAL,2);
    gtk_container_add(GTK_CONTAINER(calculator),separation);
    gtk_paned_add1(GTK_PANED(separation),screen);
    gtk_paned_add2(GTK_PANED(separation),numpad);
        //NUMPAD
            //BUTTONS CREATION
    GtkWidget *button0,*button1,*button2,*button3,*button4,*button5,*button6,*button7,*button8,*button9,*buttonPoint,*buttonEnter,*buttonPlus,*buttonMinus,*buttonTimes,*buttonDivide,*buttonPlusMinus,*buttonDelete,*buttonC,*buttonCE,*buttonSqrt,*buttonPercent,*buttonSquare,*buttonOpposite;
    int sizex = 65, sizey = 30;
    createButton(button0,"0",numpad,75,360,sizex,sizey);
    createButton(button1,"1",numpad,5,320,sizex,sizey);
    createButton(button2,"2",numpad,75,320,sizex,sizey);
    createButton(button3,"3",numpad,145,320,sizex,sizey);
    createButton(button4,"4",numpad,5,280,sizex,sizey);
    createButton(button5,"5",numpad,75,280,sizex,sizey);
    createButton(button6,"6",numpad,145,280,sizex,sizey);
    createButton(button7,"7",numpad,5,240,sizex,sizey);
    createButton(button8,"8",numpad,75,240,sizex,sizey);
    createButton(button9,"9",numpad,145,240,sizex,sizey);
    createButton(buttonPoint,".",numpad,145,360,sizex,sizey);
    createButton(buttonEnter,"=",numpad,215,360,sizex,sizey);
    createButton(buttonPlus,"+",numpad,215,320,sizex,sizey);
    createButton(buttonMinus,"-",numpad,215,280,sizex,sizey);
    createButton(buttonTimes,"×",numpad,215,240,sizex,sizey);
    createButton(buttonDivide,"÷",numpad,215,200,sizex,sizey);
    createButton(buttonPlusMinus,"±",numpad,5,360,sizex,sizey);
    createButton(buttonDelete,"⌫",numpad,145,200,sizex,sizey);
    createButton(buttonC,"C",numpad,75,200,sizex,sizey);
    createButton(buttonCE,"CE",numpad,5,200,sizex,sizey);
    createButton(buttonSqrt,"√",numpad,75,160,sizex,sizey);
    createButton(buttonPercent,"%",numpad,5,160,sizex,sizey);
    createButton(buttonSquare,"x²",numpad,145,160,sizex,sizey);
    createButton(buttonOpposite,"1/x",numpad,215,160,sizex,sizey);
    #undef createButton
        //SCREEN

    //Print
    gtk_widget_show_all(calculator);
    gtk_main();
}

