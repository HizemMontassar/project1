#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "greeting.h"


void on_button1_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
	GtkWidget *input;
	GtkWidget *output;
	char nom[20]; char hello[30];

	input=lookup_widget(objet_graphique, "entry1");
	output=lookup_widget(objet_graphique, "label2");
	sayhello(nom,hello);
	
	strcpy(nom, gtk_entry_get_text(GTK_ENTRY(input)));
	
	gtk_label_set_text(GTK_LABEL(output),hello);

	

}

