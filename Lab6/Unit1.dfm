object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 475
  ClientWidth = 683
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object TreeView1: TTreeView
    Left = 8
    Top = 8
    Width = 225
    Height = 281
    Indent = 19
    TabOrder = 0
  end
  object Memo1: TMemo
    Left = 248
    Top = 8
    Width = 217
    Height = 281
    TabOrder = 1
  end
  object ViewTreeButton: TButton
    Left = 288
    Top = 442
    Width = 75
    Height = 25
    Caption = 'View Tree'
    TabOrder = 2
    OnClick = ViewTreeButtonClick
  end
  object AddButton: TButton
    Left = 32
    Top = 320
    Width = 75
    Height = 25
    Caption = 'Insert'
    TabOrder = 3
    OnClick = AddButtonClick
  end
  object LoadButton: TButton
    Left = 32
    Top = 442
    Width = 75
    Height = 25
    Caption = 'Load'
    TabOrder = 4
    OnClick = LoadButtonClick
  end
  object KeyEdit: TEdit
    Left = 32
    Top = 362
    Width = 75
    Height = 21
    TabOrder = 5
    Text = '5'
  end
  object ValueEdit: TEdit
    Left = 32
    Top = 410
    Width = 75
    Height = 21
    TabOrder = 6
    Text = '00'
  end
  object SearchButton: TButton
    Left = 158
    Top = 320
    Width = 75
    Height = 25
    Caption = 'Search'
    TabOrder = 7
    OnClick = SearchButtonClick
  end
  object SearchEdit: TEdit
    Left = 158
    Top = 384
    Width = 75
    Height = 21
    TabOrder = 8
    Text = '5'
  end
  object StringGrid1: TStringGrid
    Left = 471
    Top = 8
    Width = 202
    Height = 281
    ColCount = 3
    RowCount = 11
    TabOrder = 9
  end
  object RemoveButton: TButton
    Left = 288
    Top = 320
    Width = 75
    Height = 25
    Caption = 'Remove'
    TabOrder = 10
    OnClick = RemoveButtonClick
  end
  object RemoveEdit: TEdit
    Left = 288
    Top = 384
    Width = 75
    Height = 21
    TabOrder = 11
    Text = '5'
  end
  object BuildTreeButton: TButton
    Left = 158
    Top = 442
    Width = 75
    Height = 25
    Caption = 'Build Tree'
    TabOrder = 12
    OnClick = BuildTreeButtonClick
  end
  object StraightButton: TButton
    Left = 432
    Top = 320
    Width = 75
    Height = 25
    Caption = 'Straight'
    TabOrder = 13
    OnClick = StraightButtonClick
  end
  object ReverseButton: TButton
    Left = 432
    Top = 382
    Width = 75
    Height = 25
    Caption = 'Reverse'
    TabOrder = 14
    OnClick = ReverseButtonClick
  end
  object IncreasingButton: TButton
    Left = 432
    Top = 442
    Width = 75
    Height = 25
    Caption = 'Increasing'
    TabOrder = 15
    OnClick = IncreasingButtonClick
  end
  object LeftAmountButton: TButton
    Left = 576
    Top = 384
    Width = 75
    Height = 25
    Caption = 'Items in left'
    TabOrder = 16
    OnClick = LeftAmountButtonClick
  end
end
