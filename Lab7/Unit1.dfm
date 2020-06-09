object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 389
  ClientWidth = 685
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 141
    Width = 140
    Height = 13
    Caption = 'Amount of fields in Hashtable'
  end
  object Label2: TLabel
    Left = 25
    Top = 13
    Width = 96
    Height = 13
    Caption = 'Amount of elements'
  end
  object Label3: TLabel
    Left = 46
    Top = 253
    Width = 63
    Height = 13
    Caption = 'Max Repeats'
  end
  object Memo1: TMemo
    Left = 152
    Top = 16
    Width = 217
    Height = 337
    TabOrder = 0
  end
  object Memo2: TMemo
    Left = 400
    Top = 16
    Width = 217
    Height = 337
    TabOrder = 1
  end
  object Edit1: TEdit
    Left = 25
    Top = 32
    Width = 112
    Height = 21
    TabOrder = 2
    Text = '20'
  end
  object Edit2: TEdit
    Left = 25
    Top = 160
    Width = 112
    Height = 21
    TabOrder = 3
    Text = '10'
  end
  object Button1: TButton
    Left = 46
    Top = 88
    Width = 75
    Height = 25
    Caption = 'Do'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Edit3: TEdit
    Left = 25
    Top = 272
    Width = 112
    Height = 21
    TabOrder = 5
  end
end
