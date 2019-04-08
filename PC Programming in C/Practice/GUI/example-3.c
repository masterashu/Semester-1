#include <gtk/gtk.h>

GdkPixbuf *create_pixbuff(const gchar *filename){
    
    GdkPixbuf *pixbuf;
    GError *error = NULL;
    pixbuf = gdk_pixbuf_new_from_file(filename, &error);

    if(!pixbuf){

        fprintf(stderr, "%s\n", error->message);
        g_error_free(error);
    }
    return pixbuf;
}

int main(int argc, char *argv[])
{
    GtkWidget *window;
    GdkPixbuf *icon;
    gtk_init(&argc, &argv);
    
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "My ICON!");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    gtk_window_set_resizable(GTK_WINDOW(window), 0);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER_ALWAYS);
    

    icon = create_pixbuff("aos2.ico");
    gtk_window_set_icon(GTK_WINDOW(window), icon);

    gtk_widget_show(window);

    g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

    g_object_unref(icon);

    gtk_main();

    printf("Bye Bye!\n");

    return 0;
}
