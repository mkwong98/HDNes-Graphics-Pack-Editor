#ifndef __hdnesPackEditorpaletteDialog__
#define __hdnesPackEditorpaletteDialog__

/**
@file
Subclass of paletteDialog, which is generated by wxFormBuilder.
*/

#include "common.h"
#include "mainForm.h"
#include "colourDialogClient.h"
#include "paletteDialogClient.h"
#include "hdnesPackEditorcolourSelectDialog.h"

//// end generated include

/** Implementing paletteDialog */
class hdnesPackEditorpaletteDialog : public paletteDialog, public colourDialogClient
{
	protected:
		// Handlers for paletteDialog events.
		void paletteBGColour( wxCommandEvent& event );
		void paletteColour1( wxCommandEvent& event );
		void paletteColour2( wxCommandEvent& event );
		void paletteColour3( wxCommandEvent& event );
		void paletteHexChanged( wxCommandEvent& event );
		void paletteSelected( wxCommandEvent& event );
	public:
		/** Constructor */
		hdnesPackEditorpaletteDialog( wxWindow* parent );
	//// end generated class members
        virtual void colourSelected(Uint8 selectedColour);

        Uint8 colours[4];
        Uint8 buttonClicked;
        paletteDialogClient* clientObj;

        void paletteToText();
        void setPalette(array<Uint8, 4> p);
        void setClient(paletteDialogClient* c);
        void refreshButtonColour();
        void openColourDialog(Uint8 clientID);
};

#endif // __hdnesPackEditorpaletteDialog__