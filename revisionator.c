#include <gtk/gtk.h>

static void window(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;
    GtkWidget *button;

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW (window), "REVISIONATOR");
    gtk_window_set_default_size(GTK_WINDOW (window), 800, 800);

    gtk_window_preset(GTK_WINDOW (window));
}

int main(int argc, char **argv) {
    GtkApplication *app;
    int status;

    app = gtk_application_new("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
}