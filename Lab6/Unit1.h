//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TTreeView *TreeView1;
	TMemo *Memo1;
	TButton *ViewTreeButton;
	TButton *AddButton;
	TButton *LoadButton;
	TEdit *KeyEdit;
	TEdit *ValueEdit;
	TButton *SearchButton;
	TEdit *SearchEdit;
	TStringGrid *StringGrid1;
	TButton *RemoveButton;
	TEdit *RemoveEdit;
	TButton *BuildTreeButton;
	TButton *StraightButton;
	TButton *ReverseButton;
	TButton *IncreasingButton;
	TButton *LeftAmountButton;
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall ViewTreeButtonClick(TObject *Sender);
	void __fastcall SearchButtonClick(TObject *Sender);
	void __fastcall RemoveButtonClick(TObject *Sender);
	void __fastcall LoadButtonClick(TObject *Sender);
	void __fastcall BuildTreeButtonClick(TObject *Sender);
	void __fastcall StraightButtonClick(TObject *Sender);
	void __fastcall ReverseButtonClick(TObject *Sender);
	void __fastcall IncreasingButtonClick(TObject *Sender);
	void __fastcall LeftAmountButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
