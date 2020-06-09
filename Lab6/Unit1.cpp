//---------------------------------------------------------------------------


#pragma hdrstop
#include <vcl.h>
#include "Unit1.h"
#include "Node.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Node *tree = NULL;
void ViewTree(Node*, int);
void WrtTree(Node*);
void WrtTreereverse(Node*);
void WrtTreerise(Node*);
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    tree = new Node(5, "sd");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
	tree -> Insert(StrToInt(KeyEdit -> Text), ValueEdit -> Text);
	tree = tree -> Balance();
}
//---------------------------------------------------------------------------
void ViewTree(Node* tree, int size) {
	if(tree == NULL) return;
	if(size == -1)
		Form1 -> TreeView1 -> Items -> Add(NULL, tree -> value);
	else
		Form1 -> TreeView1 -> Items -> AddChildFirst(Form1->TreeView1->Items->Item[size], tree -> value);
    size++;
	ViewTree(tree->right, size);
	ViewTree(tree->left, size);
	size--;
}
void __fastcall TForm1::ViewTreeButtonClick(TObject *Sender)
{
	int size = -1;
    TreeView1->Items->Clear();
	ViewTree(tree, size);
	TreeView1->FullExpand();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SearchButtonClick(TObject *Sender)
{
	Memo1 -> Lines -> Clear();
	Node* found = tree -> Find(StrToInt(SearchEdit->Text));
	if(!found) Memo1 -> Lines -> Insert(0, "Not Found");
    else Memo1 -> Lines -> Insert(0, found -> value);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RemoveButtonClick(TObject *Sender)
{
	if(!tree -> Remove(StrToInt(RemoveEdit -> Text)))
		tree = tree -> Remove(StrToInt(RemoveEdit -> Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LoadButtonClick(TObject *Sender)
{
StringGrid1->FixedCols=0; StringGrid1->ColCount=2;
	StringGrid1->RowCount=10;
	StringGrid1->Cells[0][0] = "Value";
	StringGrid1->Cells[1][0]="Key";
	StringGrid1->Cells[0][1]="00"; StringGrid1->Cells[1][1]="5";
	StringGrid1->Cells[0][2]="01"; StringGrid1->Cells[1][2]="2";
	StringGrid1->Cells[0][3]="02"; StringGrid1->Cells[1][3]="4";
	StringGrid1->Cells[0][4]="03"; StringGrid1->Cells[1][4]="1";
	StringGrid1->Cells[0][5]="04"; StringGrid1->Cells[1][5]="7";
	StringGrid1->Cells[0][6]="05"; StringGrid1->Cells[1][6]="6";
	StringGrid1->Cells[0][7]="06"; StringGrid1->Cells[1][7]="8";
	StringGrid1->Cells[0][8]="07"; StringGrid1->Cells[1][8]="0";
	StringGrid1->Cells[0][9]="08"; StringGrid1->Cells[1][9]="9";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BuildTreeButtonClick(TObject *Sender)
{
    tree = new Node(StrToInt(StringGrid1->Cells[1][1]), StringGrid1->Cells[0][1]);
	for(int i = 2; i <= 9; i++)
	{
		tree = tree->Insert(StrToInt(StringGrid1->Cells[1][i]), StringGrid1->Cells[0][i]);
	}
}
//---------------------------------------------------------------------------
void WrtTree(Node *p) {
	if (p != NULL) {
		Form1->Memo1->Lines->Add(p->value + " = " + p->key);
		WrtTree(p->left);
		WrtTree(p->right);
	}
}
//---------------------------------------------------------------------------
void WrtTreereverse(Node *p)
{
	if (p != NULL) {
		WrtTreereverse(p->left);
		WrtTreereverse(p->right);
		Form1->Memo1->Lines->Add(p->value + " = " + p->key);
	}
}
//---------------------------------------------------------------------------
void WrtTreerise(Node *p)
{
	if(p != NULL)
	{
		WrtTreerise(p->left);
		Form1->Memo1->Lines->Add(p->value + " = " + p->key);
		WrtTreerise(p->right);
	}
}
void __fastcall TForm1::StraightButtonClick(TObject *Sender)
{
	Memo1 -> Lines -> Clear();
	WrtTree(tree);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ReverseButtonClick(TObject *Sender)
{
	Memo1 -> Lines -> Clear();
    WrtTreereverse(tree);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IncreasingButtonClick(TObject *Sender)
{
	Memo1 -> Lines -> Clear();
	WrtTreerise(tree);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LeftAmountButtonClick(TObject *Sender)
{
	Memo1 -> Lines -> Clear();
    Memo1 -> Lines -> Insert(0, StrToInt(tree ->FindLeftAmount()) - 1);
}
//---------------------------------------------------------------------------

