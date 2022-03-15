#pragma once
#include "version.h"
#include "yaml.h"
#include "states.h"
#include "header.h"
#include "preview.h"
#include "settingsvar.h"
#include <iostream>
#include <sstream>
#include <msclr\marshal_cppstd.h>

namespace NewSpriteCreatorGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Zusammenfassung für MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: bool dontrefreshcheckbox = false;
	public: static int previewusage = 0;
	public: static bool wasOpenedWithFile = false;
	public: static String^ pathtostartfile = "";
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	public: System::Windows::Forms::TextBox^ textBox5;
	private:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exampleToolStripMenuItem;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox17;













	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::ToolStripMenuItem^ documentationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;



	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
private: System::Windows::Forms::CheckBox^ checkBox15;
private: System::Windows::Forms::CheckBox^ checkBox16;
private: System::Windows::Forms::CheckBox^ checkBox17;
private: System::Windows::Forms::CheckBox^ checkBox18;
private: System::Windows::Forms::CheckBox^ checkBox19;
private: System::Windows::Forms::CheckBox^ checkBox20;
private: System::Windows::Forms::CheckBox^ checkBox21;
private: System::Windows::Forms::CheckBox^ checkBox22;







private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::ToolStripMenuItem^ saveProjectAsToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label31;




private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::GroupBox^ groupBox6;
private: System::Windows::Forms::CheckBox^ checkBox32;
private: System::Windows::Forms::CheckBox^ checkBox31;
private: System::Windows::Forms::CheckBox^ checkBox29;
private: System::Windows::Forms::CheckBox^ checkBox28;
private: System::Windows::Forms::CheckBox^ checkBox27;
private: System::Windows::Forms::CheckBox^ checkBox26;
private: System::Windows::Forms::CheckBox^ checkBox25;


private: System::Windows::Forms::ToolStripMenuItem^ toolsToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ yAMLCreatorToolStripMenuItem;
private: System::Windows::Forms::Button^ b_gotostates;
private: System::Windows::Forms::CheckBox^ checkBox30;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::ToolStripMenuItem^ previewCodeToolStripMenuItem;

private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::CheckBox^ checkBox23;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::CheckBox^ checkBox24;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::GroupBox^ groupBox5;
private: System::Windows::Forms::CheckBox^ checkBox33;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::ToolStripMenuItem^ spriteDataGeneratorToolStripMenuItem;
private: System::Windows::Forms::Button^ button10;







private: System::ComponentModel::IContainer^ components;











	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveProjectAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->spriteDataGeneratorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yAMLCreatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->previewCodeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exampleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->checkBox33 = (gcnew System::Windows::Forms::CheckBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->b_gotostates = (gcnew System::Windows::Forms::Button());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(489, 543);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(73, 168);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 26);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(73, 238);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 26);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(73, 308);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(192, 26);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(73, 448);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 26);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(73, 98);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(192, 26);
			this->textBox5->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(69, 75);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 145);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"ProfileID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(71, 215);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"SpriteID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(69, 285);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Classname";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(69, 425);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"ArcNameList";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(492, 608);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(174, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"No code generated yet!";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fileToolStripMenuItem,
					this->toolsToolStripMenuItem, this->previewCodeToolStripMenuItem, this->helpToolStripMenuItem, this->infoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1250, 33);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveProjectAsToolStripMenuItem, this->saveAsToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(54, 29);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->openToolStripMenuItem->Text = L"Open Project...";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveProjectAsToolStripMenuItem
			// 
			this->saveProjectAsToolStripMenuItem->Name = L"saveProjectAsToolStripMenuItem";
			this->saveProjectAsToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->saveProjectAsToolStripMenuItem->Text = L"Save Project As...";
			this->saveProjectAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveProjectAsToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->saveAsToolStripMenuItem->Text = L"Save Code As...";
			this->saveAsToolStripMenuItem->Visible = false;
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->spriteDataGeneratorToolStripMenuItem,
					this->yAMLCreatorToolStripMenuItem
			});
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(69, 29);
			this->toolsToolStripMenuItem->Text = L"Tools";
			// 
			// spriteDataGeneratorToolStripMenuItem
			// 
			this->spriteDataGeneratorToolStripMenuItem->Name = L"spriteDataGeneratorToolStripMenuItem";
			this->spriteDataGeneratorToolStripMenuItem->Size = System::Drawing::Size(255, 34);
			this->spriteDataGeneratorToolStripMenuItem->Text = L"SpriteDataCreator";
			this->spriteDataGeneratorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::spriteDataGeneratorToolStripMenuItem_Click);
			// 
			// yAMLCreatorToolStripMenuItem
			// 
			this->yAMLCreatorToolStripMenuItem->Name = L"yAMLCreatorToolStripMenuItem";
			this->yAMLCreatorToolStripMenuItem->Size = System::Drawing::Size(255, 34);
			this->yAMLCreatorToolStripMenuItem->Text = L"YAML Creator";
			this->yAMLCreatorToolStripMenuItem->Visible = false;
			this->yAMLCreatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::yAMLCreatorToolStripMenuItem_Click);
			// 
			// previewCodeToolStripMenuItem
			// 
			this->previewCodeToolStripMenuItem->Name = L"previewCodeToolStripMenuItem";
			this->previewCodeToolStripMenuItem->Size = System::Drawing::Size(135, 29);
			this->previewCodeToolStripMenuItem->Text = L"Preview Code";
			this->previewCodeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::previewCodeToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->exampleToolStripMenuItem,
					this->documentationToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(65, 29);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// exampleToolStripMenuItem
			// 
			this->exampleToolStripMenuItem->Name = L"exampleToolStripMenuItem";
			this->exampleToolStripMenuItem->Size = System::Drawing::Size(237, 34);
			this->exampleToolStripMenuItem->Text = L"Example";
			this->exampleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exampleToolStripMenuItem_Click);
			// 
			// documentationToolStripMenuItem
			// 
			this->documentationToolStripMenuItem->Name = L"documentationToolStripMenuItem";
			this->documentationToolStripMenuItem->Size = System::Drawing::Size(237, 34);
			this->documentationToolStripMenuItem->Text = L"Documentation";
			this->documentationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::documentationToolStripMenuItem_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(78, 29);
			this->infoToolStripMenuItem->Text = L"About";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::infoToolStripMenuItem_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(313, 75);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"X-Offset";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(313, 145);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Y-Offset";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(317, 98);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(65, 26);
			this->textBox6->TabIndex = 16;
			this->textBox6->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(317, 168);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(66, 26);
			this->textBox7->TabIndex = 17;
			this->textBox7->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(313, 215);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(159, 20);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Spawn Range (xDtC)";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(317, 238);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(66, 26);
			this->textBox8->TabIndex = 19;
			this->textBox8->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(313, 285);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(159, 20);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Spawn Range (yDtC)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(313, 355);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(159, 20);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Spawn Range (xDtE)";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(317, 308);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(66, 26);
			this->textBox9->TabIndex = 22;
			this->textBox9->Text = L"0";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(317, 378);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(66, 26);
			this->textBox10->TabIndex = 23;
			this->textBox10->Text = L"0x100";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(317, 448);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(65, 26);
			this->textBox11->TabIndex = 24;
			this->textBox11->Text = L"0x100";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(527, 98);
			this->textBox12->Margin = System::Windows::Forms::Padding(2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(65, 26);
			this->textBox12->TabIndex = 25;
			this->textBox12->Text = L"0";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(527, 168);
			this->textBox13->Margin = System::Windows::Forms::Padding(2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(65, 26);
			this->textBox13->TabIndex = 26;
			this->textBox13->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(314, 425);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(159, 20);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Spawn Range (yDtE)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(523, 75);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(38, 20);
			this->label13->TabIndex = 29;
			this->label13->Text = L"_1C";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(523, 145);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(38, 20);
			this->label14->TabIndex = 30;
			this->label14->Text = L"_1E";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(523, 215);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(36, 20);
			this->label15->TabIndex = 31;
			this->label15->Text = L"_20";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(523, 285);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(36, 20);
			this->label16->TabIndex = 32;
			this->label16->Text = L"_22";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(527, 238);
			this->textBox14->Margin = System::Windows::Forms::Padding(2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(65, 26);
			this->textBox14->TabIndex = 33;
			this->textBox14->Text = L"0";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(527, 308);
			this->textBox15->Margin = System::Windows::Forms::Padding(2);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(65, 26);
			this->textBox15->TabIndex = 34;
			this->textBox15->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(523, 355);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(48, 20);
			this->label17->TabIndex = 35;
			this->label17->Text = L"Flags";
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::Window;
			this->textBox16->Location = System::Drawing::Point(527, 378);
			this->textBox16->Margin = System::Windows::Forms::Padding(2);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(65, 26);
			this->textBox16->TabIndex = 36;
			this->textBox16->Text = L"0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(69, 355);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(89, 20);
			this->label18->TabIndex = 37;
			this->label18->Text = L"Base Class";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(73, 378);
			this->textBox17->Margin = System::Windows::Forms::Padding(2);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(192, 26);
			this->textBox17->TabIndex = 38;
			this->textBox17->Text = L"dEn_c";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(519, 692);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(124, 24);
			this->radioButton1->TabIndex = 52;
			this->radioButton1->Text = L"More Sprites";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(519, 659);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(147, 24);
			this->radioButton2->TabIndex = 53;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Replace Sprites";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(659, 104);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(86, 24);
			this->checkBox1->TabIndex = 55;
			this->checkBox1->Text = L"Fireball";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Enabled = false;
			this->checkBox2->Location = System::Drawing::Point(659, 133);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(81, 24);
			this->checkBox2->TabIndex = 56;
			this->checkBox2->Text = L"Iceball";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Enabled = false;
			this->checkBox3->Location = System::Drawing::Point(659, 162);
			this->checkBox3->Margin = System::Windows::Forms::Padding(2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(65, 24);
			this->checkBox3->TabIndex = 57;
			this->checkBox3->Text = L"Star";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Enabled = false;
			this->checkBox4->Location = System::Drawing::Point(659, 192);
			this->checkBox4->Margin = System::Windows::Forms::Padding(2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(62, 24);
			this->checkBox4->TabIndex = 58;
			this->checkBox4->Text = L"\?\?\?";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Enabled = false;
			this->checkBox5->Location = System::Drawing::Point(659, 221);
			this->checkBox5->Margin = System::Windows::Forms::Padding(2);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(70, 24);
			this->checkBox5->TabIndex = 59;
			this->checkBox5->Text = L"Slide";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Checked = true;
			this->checkBox6->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox6->Enabled = false;
			this->checkBox6->Location = System::Drawing::Point(659, 250);
			this->checkBox6->Margin = System::Windows::Forms::Padding(2);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(62, 24);
			this->checkBox6->TabIndex = 60;
			this->checkBox6->Text = L"\?\?\?";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox6_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Checked = true;
			this->checkBox7->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox7->Enabled = false;
			this->checkBox7->Location = System::Drawing::Point(659, 279);
			this->checkBox7->Margin = System::Windows::Forms::Padding(2);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(139, 24);
			this->checkBox7->TabIndex = 61;
			this->checkBox7->Text = L"Ground Pound";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox7_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Checked = true;
			this->checkBox8->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox8->Enabled = false;
			this->checkBox8->Location = System::Drawing::Point(659, 308);
			this->checkBox8->Margin = System::Windows::Forms::Padding(2);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(130, 24);
			this->checkBox8->TabIndex = 68;
			this->checkBox8->Text = L"Hitting Fence";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox8_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Checked = true;
			this->checkBox9->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox9->Enabled = false;
			this->checkBox9->Location = System::Drawing::Point(659, 337);
			this->checkBox9->Margin = System::Windows::Forms::Padding(2);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(133, 24);
			this->checkBox9->TabIndex = 67;
			this->checkBox9->Text = L"Rolling Object";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox9_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Checked = true;
			this->checkBox10->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox10->Enabled = false;
			this->checkBox10->Location = System::Drawing::Point(659, 367);
			this->checkBox10->Margin = System::Windows::Forms::Padding(2);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(132, 24);
			this->checkBox10->TabIndex = 66;
			this->checkBox10->Text = L"Penguin Slide";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox10_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Checked = true;
			this->checkBox11->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox11->Enabled = false;
			this->checkBox11->Location = System::Drawing::Point(823, 75);
			this->checkBox11->Margin = System::Windows::Forms::Padding(2);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(67, 24);
			this->checkBox11->TabIndex = 65;
			this->checkBox11->Text = L"Spin";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox11_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Checked = true;
			this->checkBox12->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox12->Enabled = false;
			this->checkBox12->Location = System::Drawing::Point(823, 104);
			this->checkBox12->Margin = System::Windows::Forms::Padding(2);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(62, 24);
			this->checkBox12->TabIndex = 64;
			this->checkBox12->Text = L"\?\?\?";
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox12_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Checked = true;
			this->checkBox13->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox13->Enabled = false;
			this->checkBox13->Location = System::Drawing::Point(823, 133);
			this->checkBox13->Margin = System::Windows::Forms::Padding(2);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(127, 24);
			this->checkBox13->TabIndex = 63;
			this->checkBox13->Text = L"Propeller Drill";
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox13_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Checked = true;
			this->checkBox14->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox14->Enabled = false;
			this->checkBox14->Location = System::Drawing::Point(823, 162);
			this->checkBox14->Margin = System::Windows::Forms::Padding(2);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(134, 24);
			this->checkBox14->TabIndex = 62;
			this->checkBox14->Text = L"Fire Explosion";
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox14_CheckedChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Checked = true;
			this->checkBox15->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox15->Enabled = false;
			this->checkBox15->Location = System::Drawing::Point(823, 192);
			this->checkBox15->Margin = System::Windows::Forms::Padding(2);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(104, 24);
			this->checkBox15->TabIndex = 75;
			this->checkBox15->Text = L"Yoshi Eat";
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox15_CheckedChanged);
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Checked = true;
			this->checkBox16->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox16->Enabled = false;
			this->checkBox16->Location = System::Drawing::Point(823, 221);
			this->checkBox16->Margin = System::Windows::Forms::Padding(2);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(124, 24);
			this->checkBox16->TabIndex = 74;
			this->checkBox16->Text = L"Yoshi Mouth";
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox16_CheckedChanged);
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Checked = true;
			this->checkBox17->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox17->Enabled = false;
			this->checkBox17->Location = System::Drawing::Point(823, 250);
			this->checkBox17->Margin = System::Windows::Forms::Padding(2);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(91, 24);
			this->checkBox17->TabIndex = 73;
			this->checkBox17->Text = L"Cannon";
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox17_CheckedChanged);
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Checked = true;
			this->checkBox18->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox18->Enabled = false;
			this->checkBox18->Location = System::Drawing::Point(823, 279);
			this->checkBox18->Margin = System::Windows::Forms::Padding(2);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(118, 24);
			this->checkBox18->TabIndex = 72;
			this->checkBox18->Text = L"Spin Lift Up";
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox18_CheckedChanged);
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->Checked = true;
			this->checkBox19->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox19->Enabled = false;
			this->checkBox19->Location = System::Drawing::Point(823, 308);
			this->checkBox19->Margin = System::Windows::Forms::Padding(2);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(96, 24);
			this->checkBox19->TabIndex = 71;
			this->checkBox19->Text = L"Hammer";
			this->checkBox19->UseVisualStyleBackColor = true;
			this->checkBox19->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox19_CheckedChanged);
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->Checked = true;
			this->checkBox20->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox20->Enabled = false;
			this->checkBox20->Location = System::Drawing::Point(823, 337);
			this->checkBox20->Margin = System::Windows::Forms::Padding(2);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(106, 24);
			this->checkBox20->TabIndex = 70;
			this->checkBox20->Text = L"Yoshi Fire";
			this->checkBox20->UseVisualStyleBackColor = true;
			this->checkBox20->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox20_CheckedChanged);
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->Checked = true;
			this->checkBox21->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox21->Enabled = false;
			this->checkBox21->Location = System::Drawing::Point(823, 367);
			this->checkBox21->Margin = System::Windows::Forms::Padding(2);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(101, 24);
			this->checkBox21->TabIndex = 69;
			this->checkBox21->Text = L"Yoshi Ice";
			this->checkBox21->UseVisualStyleBackColor = true;
			this->checkBox21->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox21_CheckedChanged);
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->Checked = true;
			this->checkBox22->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox22->Enabled = false;
			this->checkBox22->Location = System::Drawing::Point(659, 75);
			this->checkBox22->Margin = System::Windows::Forms::Padding(2);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(62, 24);
			this->checkBox22->TabIndex = 76;
			this->checkBox22->Text = L"\?\?\?";
			this->checkBox22->UseVisualStyleBackColor = true;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox22_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Location = System::Drawing::Point(288, 48);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(340, 445);
			this->groupBox1->TabIndex = 84;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Only More Sprites";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->checkBox33);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->textBox26);
			this->groupBox2->Controls->Add(this->label33);
			this->groupBox2->Controls->Add(this->textBox28);
			this->groupBox2->Controls->Add(this->textBox29);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label36);
			this->groupBox2->Controls->Add(this->textBox30);
			this->groupBox2->Controls->Add(this->label35);
			this->groupBox2->Controls->Add(this->label31);
			this->groupBox2->Controls->Add(this->textBox31);
			this->groupBox2->Controls->Add(this->label34);
			this->groupBox2->Location = System::Drawing::Point(632, 48);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(561, 445);
			this->groupBox2->TabIndex = 85;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Active Physics";
			// 
			// button10
			// 
			this->button10->Enabled = false;
			this->button10->Location = System::Drawing::Point(142, 348);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(85, 90);
			this->button10->TabIndex = 89;
			this->button10->Text = L"Refesh Bitfield";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(526, 17);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(30, 30);
			this->button7->TabIndex = 88;
			this->button7->Text = L"P";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// checkBox33
			// 
			this->checkBox33->AutoSize = true;
			this->checkBox33->Location = System::Drawing::Point(392, 414);
			this->checkBox33->Name = L"checkBox33";
			this->checkBox33->Size = System::Drawing::Size(164, 24);
			this->checkBox33->TabIndex = 12;
			this->checkBox33->Text = L"Has ActivePhysics";
			this->checkBox33->UseVisualStyleBackColor = true;
			this->checkBox33->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox33_CheckedChanged);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(27, 396);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(109, 42);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Uncheck All";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(27, 348);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 42);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Check All";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(263, 405);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 33);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Copy";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Enabled = false;
			this->label26->Location = System::Drawing::Point(259, 348);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(66, 20);
			this->label26->TabIndex = 1;
			this->label26->Text = L"Bitfield2";
			// 
			// textBox26
			// 
			this->textBox26->Enabled = false;
			this->textBox26->Location = System::Drawing::Point(231, 371);
			this->textBox26->Margin = System::Windows::Forms::Padding(2);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(126, 26);
			this->textBox26->TabIndex = 0;
			this->textBox26->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox26_TextChanged);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Enabled = false;
			this->label33->Location = System::Drawing::Point(354, 21);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(145, 20);
			this->label33->TabIndex = 8;
			this->label33->Text = L"xDistanceToCenter";
			// 
			// textBox28
			// 
			this->textBox28->Enabled = false;
			this->textBox28->Location = System::Drawing::Point(354, 43);
			this->textBox28->Margin = System::Windows::Forms::Padding(2);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(145, 26);
			this->textBox28->TabIndex = 4;
			this->textBox28->Text = L"0.0";
			// 
			// textBox29
			// 
			this->textBox29->Enabled = false;
			this->textBox29->Location = System::Drawing::Point(358, 107);
			this->textBox29->Margin = System::Windows::Forms::Padding(2);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(141, 26);
			this->textBox29->TabIndex = 5;
			this->textBox29->Text = L"0.0";
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Player/Yoshi A", L"Player/Yoshi B", L"Most general sprites",
					L"Balloons", L"Collectibles/Coins", L"Player fireballs", L"Player iceballs"
			});
			this->comboBox1->Location = System::Drawing::Point(340, 288);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(177, 28);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"Most general sprites";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Enabled = false;
			this->label36->Location = System::Drawing::Point(354, 206);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(135, 20);
			this->label36->TabIndex = 11;
			this->label36->Text = L"yDistanceToEdge";
			// 
			// textBox30
			// 
			this->textBox30->Enabled = false;
			this->textBox30->Location = System::Drawing::Point(358, 170);
			this->textBox30->Margin = System::Windows::Forms::Padding(2);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(141, 26);
			this->textBox30->TabIndex = 6;
			this->textBox30->Text = L"0.0";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Enabled = false;
			this->label35->Location = System::Drawing::Point(354, 148);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(135, 20);
			this->label35->TabIndex = 10;
			this->label35->Text = L"xDistanceToEdge";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Enabled = false;
			this->label31->Location = System::Drawing::Point(370, 266);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(115, 20);
			this->label31->TabIndex = 0;
			this->label31->Text = L"SpriteCategory";
			// 
			// textBox31
			// 
			this->textBox31->Enabled = false;
			this->textBox31->Location = System::Drawing::Point(358, 228);
			this->textBox31->Margin = System::Windows::Forms::Padding(2);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(141, 26);
			this->textBox31->TabIndex = 7;
			this->textBox31->Text = L"0.0";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Enabled = false;
			this->label34->Location = System::Drawing::Point(354, 85);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(145, 20);
			this->label34->TabIndex = 9;
			this->label34->Text = L"yDistanceToCenter";
			// 
			// groupBox3
			// 
			this->groupBox3->Location = System::Drawing::Point(56, 48);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(228, 445);
			this->groupBox3->TabIndex = 86;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Basic Settings";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button9);
			this->groupBox4->Controls->Add(this->b_gotostates);
			this->groupBox4->Controls->Add(this->checkBox30);
			this->groupBox4->Location = System::Drawing::Point(56, 507);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(141, 242);
			this->groupBox4->TabIndex = 87;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"States";
			// 
			// button9
			// 
			this->button9->Enabled = false;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(106, 20);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(30, 30);
			this->button9->TabIndex = 90;
			this->button9->Text = L"P";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// b_gotostates
			// 
			this->b_gotostates->Enabled = false;
			this->b_gotostates->Location = System::Drawing::Point(35, 117);
			this->b_gotostates->Name = L"b_gotostates";
			this->b_gotostates->Size = System::Drawing::Size(78, 58);
			this->b_gotostates->TabIndex = 90;
			this->b_gotostates->Text = L"State Editor";
			this->b_gotostates->UseVisualStyleBackColor = true;
			this->b_gotostates->Click += gcnew System::EventHandler(this, &MyForm::b_gotostates_Click);
			// 
			// checkBox30
			// 
			this->checkBox30->AutoSize = true;
			this->checkBox30->Location = System::Drawing::Point(35, 84);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(78, 24);
			this->checkBox30->TabIndex = 91;
			this->checkBox30->Text = L"Active";
			this->checkBox30->UseVisualStyleBackColor = true;
			this->checkBox30->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox30_CheckedChanged);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Enabled = false;
			this->label37->Location = System::Drawing::Point(399, 79);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(59, 20);
			this->label37->TabIndex = 57;
			this->label37->Text = L"ScaleZ";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Enabled = false;
			this->label38->Location = System::Drawing::Point(336, 79);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(60, 20);
			this->label38->TabIndex = 56;
			this->label38->Text = L"ScaleY";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Enabled = false;
			this->label39->Location = System::Drawing::Point(278, 79);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(60, 20);
			this->label39->TabIndex = 55;
			this->label39->Text = L"ScaleX";
			// 
			// textBox32
			// 
			this->textBox32->Enabled = false;
			this->textBox32->Location = System::Drawing::Point(403, 102);
			this->textBox32->Margin = System::Windows::Forms::Padding(2);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(57, 26);
			this->textBox32->TabIndex = 54;
			this->textBox32->Text = L"1.0";
			// 
			// textBox33
			// 
			this->textBox33->Enabled = false;
			this->textBox33->Location = System::Drawing::Point(341, 102);
			this->textBox33->Margin = System::Windows::Forms::Padding(2);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(58, 26);
			this->textBox33->TabIndex = 53;
			this->textBox33->Text = L"1.0";
			// 
			// textBox34
			// 
			this->textBox34->Enabled = false;
			this->textBox34->Location = System::Drawing::Point(282, 102);
			this->textBox34->Margin = System::Windows::Forms::Padding(2);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(55, 26);
			this->textBox34->TabIndex = 52;
			this->textBox34->Text = L"1.0";
			// 
			// comboBox2
			// 
			this->comboBox2->Enabled = false;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Enemy", L"Boss", L"Player", L"Item", L"Map",
					L"MapObj"
			});
			this->comboBox2->Location = System::Drawing::Point(282, 163);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(177, 28);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->Text = L"Player";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Enabled = false;
			this->label32->Location = System::Drawing::Point(327, 139);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(75, 20);
			this->label32->TabIndex = 2;
			this->label32->Text = L"LightMap";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button8);
			this->groupBox6->Controls->Add(this->button3);
			this->groupBox6->Controls->Add(this->checkBox32);
			this->groupBox6->Controls->Add(this->checkBox31);
			this->groupBox6->Controls->Add(this->checkBox29);
			this->groupBox6->Controls->Add(this->checkBox28);
			this->groupBox6->Controls->Add(this->checkBox27);
			this->groupBox6->Controls->Add(this->checkBox26);
			this->groupBox6->Controls->Add(this->checkBox25);
			this->groupBox6->Location = System::Drawing::Point(204, 507);
			this->groupBox6->Margin = System::Windows::Forms::Padding(2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(2);
			this->groupBox6->Size = System::Drawing::Size(281, 242);
			this->groupBox6->TabIndex = 89;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Headers";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(246, 20);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(30, 30);
			this->button8->TabIndex = 90;
			this->button8->Text = L"P";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(20, 192);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 39);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Header Editor";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// checkBox32
			// 
			this->checkBox32->AutoSize = true;
			this->checkBox32->Location = System::Drawing::Point(20, 163);
			this->checkBox32->Margin = System::Windows::Forms::Padding(2);
			this->checkBox32->Name = L"checkBox32";
			this->checkBox32->Size = System::Drawing::Size(147, 24);
			this->checkBox32->TabIndex = 7;
			this->checkBox32->Text = L"Custom Header";
			this->checkBox32->UseVisualStyleBackColor = true;
			this->checkBox32->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox32_CheckedChanged);
			// 
			// checkBox31
			// 
			this->checkBox31->AutoSize = true;
			this->checkBox31->Location = System::Drawing::Point(144, 94);
			this->checkBox31->Margin = System::Windows::Forms::Padding(2);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(82, 24);
			this->checkBox31->TabIndex = 6;
			this->checkBox31->Text = L"boss.h";
			this->checkBox31->UseVisualStyleBackColor = true;
			// 
			// checkBox29
			// 
			this->checkBox29->AutoSize = true;
			this->checkBox29->Location = System::Drawing::Point(144, 65);
			this->checkBox29->Margin = System::Windows::Forms::Padding(2);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(88, 24);
			this->checkBox29->TabIndex = 4;
			this->checkBox29->Text = L"stage.h";
			this->checkBox29->UseVisualStyleBackColor = true;
			// 
			// checkBox28
			// 
			this->checkBox28->AutoSize = true;
			this->checkBox28->Location = System::Drawing::Point(144, 36);
			this->checkBox28->Margin = System::Windows::Forms::Padding(2);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(68, 24);
			this->checkBox28->TabIndex = 3;
			this->checkBox28->Text = L"sfx.h";
			this->checkBox28->UseVisualStyleBackColor = true;
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->Location = System::Drawing::Point(20, 94);
			this->checkBox27->Margin = System::Windows::Forms::Padding(2);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(100, 24);
			this->checkBox27->TabIndex = 2;
			this->checkBox27->Text = L"g3dhax.h";
			this->checkBox27->UseVisualStyleBackColor = true;
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->Location = System::Drawing::Point(20, 65);
			this->checkBox26->Margin = System::Windows::Forms::Padding(2);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(88, 24);
			this->checkBox26->TabIndex = 1;
			this->checkBox26->Text = L"game.h";
			this->checkBox26->UseVisualStyleBackColor = true;
			// 
			// checkBox25
			// 
			this->checkBox25->AutoSize = true;
			this->checkBox25->Location = System::Drawing::Point(20, 36);
			this->checkBox25->Margin = System::Windows::Forms::Padding(2);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(109, 24);
			this->checkBox25->TabIndex = 0;
			this->checkBox25->Text = L"common.h";
			this->checkBox25->UseVisualStyleBackColor = true;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Enabled = false;
			this->label27->Location = System::Drawing::Point(31, 68);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(90, 20);
			this->label27->TabIndex = 80;
			this->label27->Text = L"ARC-Name";
			// 
			// textBox24
			// 
			this->textBox24->Enabled = false;
			this->textBox24->Location = System::Drawing::Point(128, 95);
			this->textBox24->Margin = System::Windows::Forms::Padding(2);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 26);
			this->textBox24->TabIndex = 79;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Enabled = false;
			this->label28->Location = System::Drawing::Point(11, 97);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(113, 20);
			this->label28->TabIndex = 81;
			this->label28->Text = L"BRRES-Name";
			// 
			// textBox23
			// 
			this->textBox23->Enabled = false;
			this->textBox23->Location = System::Drawing::Point(128, 66);
			this->textBox23->Margin = System::Windows::Forms::Padding(2);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 26);
			this->textBox23->TabIndex = 78;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Enabled = false;
			this->label29->Location = System::Drawing::Point(22, 127);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(99, 20);
			this->label29->TabIndex = 82;
			this->label29->Text = L"MDL0-Name";
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->Location = System::Drawing::Point(20, 36);
			this->checkBox23->Margin = System::Windows::Forms::Padding(2);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(111, 24);
			this->checkBox23->TabIndex = 77;
			this->checkBox23->Text = L"Has Model";
			this->checkBox23->UseVisualStyleBackColor = true;
			this->checkBox23->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox23_CheckedChanged);
			// 
			// textBox25
			// 
			this->textBox25->Enabled = false;
			this->textBox25->Location = System::Drawing::Point(128, 124);
			this->textBox25->Margin = System::Windows::Forms::Padding(2);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 26);
			this->textBox25->TabIndex = 83;
			// 
			// checkBox24
			// 
			this->checkBox24->AutoSize = true;
			this->checkBox24->Enabled = false;
			this->checkBox24->Location = System::Drawing::Point(20, 175);
			this->checkBox24->Margin = System::Windows::Forms::Padding(2);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(187, 24);
			this->checkBox24->TabIndex = 84;
			this->checkBox24->Text = L"Has CHR0 Animation";
			this->checkBox24->UseVisualStyleBackColor = true;
			this->checkBox24->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox24_CheckedChanged);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Enabled = false;
			this->label30->Location = System::Drawing::Point(16, 205);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(106, 20);
			this->label30->TabIndex = 85;
			this->label30->Text = L"1st Animation";
			// 
			// textBox27
			// 
			this->textBox27->Enabled = false;
			this->textBox27->Location = System::Drawing::Point(128, 205);
			this->textBox27->Margin = System::Windows::Forms::Padding(2);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 26);
			this->textBox27->TabIndex = 86;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button6);
			this->groupBox5->Controls->Add(this->textBox27);
			this->groupBox5->Controls->Add(this->label30);
			this->groupBox5->Controls->Add(this->label37);
			this->groupBox5->Controls->Add(this->comboBox2);
			this->groupBox5->Controls->Add(this->checkBox24);
			this->groupBox5->Controls->Add(this->textBox25);
			this->groupBox5->Controls->Add(this->label38);
			this->groupBox5->Controls->Add(this->label32);
			this->groupBox5->Controls->Add(this->checkBox23);
			this->groupBox5->Controls->Add(this->label39);
			this->groupBox5->Controls->Add(this->label29);
			this->groupBox5->Controls->Add(this->textBox23);
			this->groupBox5->Controls->Add(this->textBox32);
			this->groupBox5->Controls->Add(this->label28);
			this->groupBox5->Controls->Add(this->textBox24);
			this->groupBox5->Controls->Add(this->label27);
			this->groupBox5->Controls->Add(this->textBox33);
			this->groupBox5->Controls->Add(this->textBox34);
			this->groupBox5->Location = System::Drawing::Point(684, 507);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2);
			this->groupBox5->Size = System::Drawing::Size(509, 242);
			this->groupBox5->TabIndex = 88;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Model Settings";
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(474, 20);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(30, 30);
			this->button6->TabIndex = 87;
			this->button6->Text = L"P";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1250, 766);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->checkBox22);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox17);
			this->Controls->Add(this->checkBox18);
			this->Controls->Add(this->checkBox19);
			this->Controls->Add(this->checkBox20);
			this->Controls->Add(this->checkBox21);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"NewSpriteCreator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		saveAsToolStripMenuItem_Click(sender, e);
		return;
	}
private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ betatext = "";

	if (beta)
	{
		betatext = " DEVDEBUG";
	}
	if (useminor2)
	{
		String^ msg = "NewSpriteCreator-GUI v" + VERSION_MAJOR + "." + VERSION_MINOR + "." + VERSION_MINOR2 + betatext + "\nCoded by LiQ\n\n©New Super Mario Lost Worlds Team - 2021-2022\n\nWould you like to join the discord server?";
		auto result = MessageBox::Show(msg, "About", MessageBoxButtons::YesNo);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			String^ target = "https://discord.gg/4s72Nnm";
			System::Diagnostics::Process::Start(target); //Open Website
		}
	}
	else
	{
		String^ msg = "NewSpriteCreator-GUI v" + VERSION_MAJOR + "." + VERSION_MINOR + betatext + "\nCoded by LiQ\n\n©New Super Mario Lost Worlds Team - 2021-2022\n\nWould you like to join the discord server?";
		auto result = MessageBox::Show(msg, "About", MessageBoxButtons::YesNo);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			String^ target = "https://discord.gg/4s72Nnm";
			System::Diagnostics::Process::Start(target); //Open Website
		}
	}
}

private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ name = textBox5->Text;
	String^ profileid = textBox1->Text;
	String^ spriteid = textBox2->Text;
	String^ classname = textBox3->Text;
	String^ arcnamelistname = textBox4->Text;
	String^ xoffset = textBox6->Text;
	String^ yoffset = textBox7->Text;
	String^ xDtC = textBox8->Text;
	String^ yDtC = textBox9->Text;
	String^ xDtE = textBox10->Text;
	String^ yDtE = textBox11->Text;
	String^ _1C = textBox12->Text;
	String^ _1E = textBox13->Text;
	String^ _20 = textBox14->Text;
	String^ _22 = textBox15->Text;
	String^ flags = textBox16->Text;
	String^ inheritanceclass = textBox17->Text;
	bool usestates = false;
	String^ state;
	String^ createstates;

	//Ab hier
	String^ statefunctions;
	String^ hasmodelvar = "";
	String^ loadmodel = "";
	String^ arcname = textBox23->Text;
	String^ brresname = textBox24->Text;
	String^ mdlname = textBox25->Text;
	String^ basicclass;
	String^ executefunc;
	String^ drawfunc;
	String^ createfunc;
	String^ updatemodelmatricesfunc;
	String^ arc;
	String^ chrload;

	String^ APxDtC = textBox28->Text;
	String^ APyDtC = textBox29->Text;
	String^ APxDtE = textBox30->Text;
	String^ APyDtE = textBox31->Text;

	String^ ScX = textBox34->Text;
	String^ ScY = textBox33->Text;
	String^ ScZ = textBox32->Text;



	String^ commonh = "";
	String^ gameh = "";
	String^ g3dhaxh = "";
	String^ sfxh = "";
	String^ stageh = "";
	String^ bossh = "";
	String^ customspriteh = "";
	
	if (checkBox30->Checked)
	{
		states instance;
		int foocounter = 0;
		for each (String^ i in instance.statesarr)
		{
			foocounter++;
		}
		if (foocounter == 0)
		{
			checkBox30->Checked = false;
		}
		foocounter = 0;
	}
	if (checkBox32->Checked)
	{
		header instance;
		int foocounter = 0;
		for each (String ^ i in instance.headerarr)
		{
			foocounter++;
		}
		if (foocounter == 0)
		{
			checkBox32->Checked = false;
		}
		foocounter = 0;
	}
	if (checkBox25->Checked)
	{
		commonh = "#include <common.h>\n";
	}
	if (checkBox26->Checked)
	{
		gameh = "#include <game.h>\n";
	}
	if (checkBox27->Checked)
	{
		g3dhaxh = "#include <g3dhax.h>\n";
	}
	if (checkBox28->Checked)
	{
		sfxh = "#include <sfx.h>\n";
	}
	if (checkBox29->Checked)
	{
		stageh = "#include <stage.h>\n";
	}
	if (checkBox31->Checked)
	{
		bossh = "#include \"boss.h\"\n";
	}
	if (checkBox32->Checked)
	{
		header instance;
		int count = 0;
		for each (String ^ i in instance.headerarr)
		{
			count++;
		}
		bool firstrun = true;
		for (int i = 0; i < count; i++)
		{
			if (firstrun)
			{
				customspriteh = "#include \"" + instance.headerarr[i] + "\"\n";
			}
			else
			{
				customspriteh = customspriteh + "#include \"" + instance.headerarr[i] + "\"\n";
			}
			firstrun = false;
		}
		firstrun = true;
	}







	String^ category1 = "0";
	String^ category2 = "0";

	if (comboBox1->Text == "Player/Yoshi A")
		category1 = "0";
	else if (comboBox1->Text == "Player/Yoshi B")
		category1 = "1";
	else if (comboBox1->Text == "Most general sprites")
		category1 = "3";
	else if (comboBox1->Text == "Balloons")
		category1 = "4";
	else if (comboBox1->Text == "Collectibles/Coins")
		category1 = "5";
	else if (comboBox1->Text == "Player fireballs")
	{
		category1 = "6";
		category2 = "1";
	}
	else if (comboBox1->Text == "Player iceballs")
	{
		category1 = "6";
		category2 = "2";
	}

	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox22->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox1->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox2->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox3->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox4->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox5->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox6->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox7->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox8->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox9->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox10->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox11->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox12->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox13->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox14->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox15->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox16->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox17->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox18->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox19->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox20->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox21->Checked)
		binarycollision[21] = 1;
	else
		binarycollision[21] = 0;

	fullbinary |= binarycollision[0];
	fullbinary |= binarycollision[1] << 1;
	fullbinary |= binarycollision[2] << 2;
	fullbinary |= binarycollision[3] << 3;
	fullbinary |= binarycollision[4] << 4;
	fullbinary |= binarycollision[5] << 5;
	fullbinary |= binarycollision[6] << 6;
	fullbinary |= binarycollision[7] << 7;
	fullbinary |= binarycollision[8] << 8;
	fullbinary |= binarycollision[9] << 9;
	fullbinary |= binarycollision[10] << 10;
	fullbinary |= binarycollision[11] << 11;
	fullbinary |= binarycollision[12] << 12;
	fullbinary |= binarycollision[13] << 13;
	fullbinary |= binarycollision[14] << 14;
	fullbinary |= binarycollision[15] << 15;
	fullbinary |= binarycollision[16] << 16;
	fullbinary |= binarycollision[17] << 17;
	fullbinary |= binarycollision[18] << 18;
	fullbinary |= binarycollision[19] << 19;
	fullbinary |= binarycollision[20] << 20;
	fullbinary |= binarycollision[21] << 21;

	String^ hexnum = fullbinary.ToString("X");




	if (checkBox30->Checked)
	{
		usestates = true;
	}


	if (checkBox24->Checked)
	{
		chrload = "\n	nw4r::g3d::ResAnmChr anmChr = this->resFile.GetResAnmChr(\"" + textBox27->Text + "\");\n	this->animationChr.setup(mdl, anmChr, &this->allocator, 0);";
	}

	String^ ap;
	if (checkBox23->Checked)
	{
		hasmodelvar = "\n	mHeapAllocator_c allocator;\n	m3d::mdl_c bodyModel;\n	m3d::anmChr_c animationChr;\n	nw4r::g3d::ResFile resFile;\n\n";
		loadmodel = "	allocator.link(-1, GameHeaps[0], 0, 0x20);\n\n	resFile.data = getResource(\"" + arcname + "\", \"g3d/" + brresname + ".brres\");\n	nw4r::g3d::ResMdl mdl = this->resFile.GetResMdl(\"" + mdlname + "\");\n	bodyModel.setup(mdl, &allocator, 0x224, 1, 0);" + "\n	SetupTextures_" + comboBox2->Text + "(&bodyModel, 0);" + chrload + "\n\n	allocator.unlink(); \n\n	this->scale.x = " + ScX + "; \n	this->scale.y = " + ScY + "; \n	this->scale.z = " + ScZ + ";\n\n";
		
		arc = "\nconst char* " + arcnamelistname + " [] = { \"" + textBox23->Text + "\", NULL };\n\n";
	}
	else
	{
		hasmodelvar = "";
		loadmodel = "";
		arc = "";
	}
	if (checkBox33->Checked)
	{
		ap = "\n	ActivePhysics::Info HitMeBaby; \n	HitMeBaby.xDistToCenter = " + APxDtC + "; \n	HitMeBaby.yDistToCenter = " + APyDtC + "; \n	HitMeBaby.xDistToEdge = " + APxDtE + "; \n	HitMeBaby.yDistToEdge = " + APyDtE + "; \n	HitMeBaby.category1 = 0x" + category1 + "; \n	HitMeBaby.category2 = 0x" + category2 + "; \n	HitMeBaby.bitfield1 = 0x4F; \n	HitMeBaby.bitfield2 = 0x" + hexnum + "; \n	HitMeBaby.unkShort1C = 0; \n	HitMeBaby.callback = &dEn_c::collisionCallback; \n	this->aPhysics.initWithStruct(this, &HitMeBaby); \n	this->aPhysics.addToList();\n\n";
	}
	else
	{
		ap = "";
	}

	String^ includes = commonh + gameh + g3dhaxh + sfxh + stageh + bossh + customspriteh + "\n";

	String^ umminbaseicclas = "";
	if (checkBox23->Checked)
	{
		umminbaseicclas = "void updateModelMatrices();";
	}

	String^ baasurinbasicclass = "";
	String^ baasurset = "";
	String^ baasurfunction = "";
	if (checkBox24->Checked)
	{
		baasurinbasicclass = "void bindAnimChr_and_setUpdateRate(const char* name, int unk, float unk2, float rate);";
		baasurset = "	bindAnimChr_and_setUpdateRate(\"" + textBox27->Text + "\", 1, 0.0, 1.0);";
		baasurfunction = "\n\nvoid " + classname + "::bindAnimChr_and_setUpdateRate(const char* name, int unk, float unk2, float rate) {\n	nw4r::g3d::ResAnmChr anmChr = this->resFile.GetResAnmChr(name);\n	this->animationChr.bind(&this->bodyModel, anmChr, unk);\n	this->bodyModel.bindAnim(&this->animationChr, unk2);\n	this->animationChr.setUpdateRate(rate);\n}\n";
	}



	if (radioButton1->Checked)
	{
		basicclass = "class " + classname + " : public " + inheritanceclass +
			" {\npublic:\n\n	int onCreate();\n	int onExecute();\n	int onDelete();\n	int onDraw();\n\n	" + umminbaseicclas + "\n	" + baasurinbasicclass + "\n\n	static dActor_c* build();\n\n	//void playerCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n	//void spriteCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n	//void yoshiCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n\n	";


		basicclass = basicclass + "//bool collisionCat3_StarPower(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat5_Mario(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCatD_Drill(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat8_FencePunch(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat7_GroundPound(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat7_GroundPoundYoshi(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCatA_PenguinMario(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat11_PipeCannon(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat9_RollingObject(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat1_Fireball_E_Explosion(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat2_IceBall_15_YoshiIce(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat13_Hammer(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat14_YoshiFire(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
	}
	else
	{
		basicclass = "class " + classname + " : public " + inheritanceclass +
			" {\npublic:\n\n	int onCreate();\n	int onExecute();\n	int onDelete();\n	int onDraw();\n\n	" + umminbaseicclas + "\n	" + baasurinbasicclass + "\n\n	static " + classname + "* build();\n\n	//void playerCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n	//void spriteCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n	//void yoshiCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n\n	" +
			"//bool collisionCat3_StarPower(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat5_Mario(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCatD_Drill(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat8_FencePunch(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat7_GroundPound(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat7_GroundPoundYoshi(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCatA_PenguinMario(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat11_PipeCannon(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat9_RollingObject(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat1_Fireball_E_Explosion(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat2_IceBall_15_YoshiIce(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat13_Hammer(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat14_YoshiFire(ActivePhysics *apThis, ActivePhysics *apOther);\n\n";
	}

	if (checkBox30->Checked)
	{
		states instance;
		createfunc = "\n\n	doStateChange(&StateID_" + instance.statesarr[0] + ");\n\n";
		if (checkBox23->Checked)
		{
			if (checkBox24->Checked)
				executefunc = "	acState.execute();\n\n	updateModelMatrices();\n	bodyModel._vf1C();\n\n	if (this->animationChr.isAnimationDone()) {\n		this->animationChr.setCurrentFrame(0.0);\n	}\n\n";
			else
				executefunc = "	acState.execute();\n\n	updateModelMatrices();\n	bodyModel._vf1C();\n\n";
		}
		else
		{
			executefunc = "	acState.execute();\n\n";
		}
	}
	else
	{
		if (checkBox23->Checked)
		{
			if (checkBox24->Checked)
				executefunc = "	updateModelMatrices();\n	bodyModel._vf1C();\n\n	if (this->animationChr.isAnimationDone()) {\n		this->animationChr.setCurrentFrame(0.0);\n	}\n\n";
			else
				executefunc = "	updateModelMatrices();\n	bodyModel._vf1C();\n\n";
		}
		else
		{
			executefunc = "";
		}


		createfunc = "";
	}
	if (checkBox23->Checked)
	{
		drawfunc = "	bodyModel.scheduleForDrawing();\n\n";
		updatemodelmatricesfunc = "\nvoid " + classname + "::updateModelMatrices() {\n	matrix.translation(pos.x, pos.y, pos.z);\n	matrix.applyRotationYXZ(&rot.x, &rot.y, &rot.z);\n\n	bodyModel.setDrawMatrix(matrix);\n	bodyModel.setScale(&scale);\n	bodyModel.calcWorld(false);\n}\n";
	}
	else
	{
		drawfunc = "";
		updatemodelmatricesfunc = "";
	}



	state = "";
	createstates = "";
	if (usestates)
	{
		states instance;
		int count = 0;
		for each (String^ i in instance.statesarr)
		{
			count++;
		}
		bool firstrun = true;
		for (int i = 0; i < count; i++)
		{
			if (firstrun)
			{
				state = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + instance.statesarr[i] + ");\n";
			}
			else
			{
				state = state + "	DECLARE_STATE(" + instance.statesarr[i] + ");\n";
			}
			firstrun = false;
		}
		firstrun = true;

		for (int i = 0; i < count; i++)
		{
			if (firstrun)
			{
				createstates = "CREATE_STATE(" + classname + ", " + instance.statesarr[i] + ");\n";
			}
			else
			{
				createstates = createstates + "CREATE_STATE(" + classname + ", " + instance.statesarr[i] + ");\n";
			}
			firstrun = false;
		}
		firstrun = true;

		for (int i = 0; i < count; i++)
		{
			if (firstrun)
			{
				statefunctions = "\n\nvoid " + classname + "::beginState_" + instance.statesarr[i] + "() {}\n" + "void " + classname + "::executeState_" + instance.statesarr[i] + "() {}\n" + "void " + classname + "::endState_" + instance.statesarr[i] + "() {}";
			}
			else
			{
				statefunctions = statefunctions + "\n\nvoid " + classname + "::beginState_" + instance.statesarr[i] + "() {}\n" + "void " + classname + "::executeState_" + instance.statesarr[i] + "() {}\n" + "void " + classname + "::endState_" + instance.statesarr[i] + "() {}";
			}
			firstrun = false;
		}
		
	}
	String^ endclass = "};\n\n";

	String^ wholecode;
	if (radioButton1->Checked == true)
		wholecode = includes + arc + basicclass + hasmodelvar + state + endclass + createstates + updatemodelmatricesfunc + baasurfunction + "\ndActor_c* " + classname + "::build() {\n	void *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\n	return new(buffer) " + classname + ";\n}\n\n" + "const SpriteData " + name + "SpriteData = \n{ ProfileId::" + profileid + ", " + xoffset + ", " + yoffset + ", " + xDtC + ", " + yDtC + ", " + xDtE + ", " + yDtE + ", " + _1C + ", " + _1E + ", " + _20 + ", " + _22 + ", " + flags + " };\n\n" + "Profile " + name + "Profile(&" + classname + "::build, SpriteId::" + spriteid + ", &" + name + "SpriteData, ProfileId::" + profileid + ", ProfileId::" + profileid + ", \"" + name + "\", " + arcnamelistname + ");\n\n\n" + "int " + classname + "::onCreate() {\n" + loadmodel + ap + baasurset + createfunc + "\n\n	this->onExecute();\n\n	return true;\n}\n\n" + "int " + classname + "::onExecute() {\n" + executefunc + "	return true;" + "\n}\n\n" + "int " + classname + "::onDelete() {\n	return true;\n}\n\n" + "int " + classname + "::onDraw() {\n" + drawfunc + "	return true;" + "\n}" + statefunctions;

	else if (radioButton2->Checked == true)
		wholecode = includes + arc + basicclass + hasmodelvar + state + endclass + createstates + updatemodelmatricesfunc + baasurfunction + "\n" + classname + "* " + classname + "::build() {\n	void *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\n	return new(buffer) " + classname + ";\n}\n\n\n" + "int " + classname + "::onCreate() {\n" + loadmodel + ap + baasurset + createfunc + "\n\n	this->onExecute();\n\n	return true;\n}\n\n" + "int " + classname + "::onExecute() {\n" + executefunc + "	return true;" + "\n}\n\n" + "int " + classname + "::onDelete() {\n	return true;\n}\n\n" + "int " + classname + "::onDraw() {\n" + drawfunc + "	return true;" + "\n}" + statefunctions;

	

	SaveFileDialog^ sfd = gcnew SaveFileDialog();

	try
	{
		sfd->Filter = "C++ Source Files|*.cpp|C++ Header Files|*.h|Text Files|*.txt|All Files|*.*";
		sfd->Title = "Save Code As...";
		if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ path = sfd->FileName;
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(System::IO::File::Create(path));
			try
			{
				writer->Write(wholecode);
			}
			finally
			{
				delete writer;
			}
			label7->Text = "Code successfully saved!";
		}
	}
	finally
	{
		delete sfd;
	}

}


private: System::Void exampleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox5->Text = "Goomba";
	textBox1->Text = "Goomba";
	textBox2->Text = "Goomba";
	textBox3->Text = "daGoomba_c";
	textBox4->Text = "GoombaArcNameList";
	textBox6->Text = "0";
	textBox7->Text = "0";
	textBox8->Text = "0";
	textBox9->Text = "0";
	textBox10->Text = "0x100";
	textBox11->Text = "0x100";
	textBox12->Text = "0";
	textBox13->Text = "0";
	textBox14->Text = "0";
	textBox15->Text = "0";
	textBox16->Text = "0";
	checkBox23->Checked = true;
	textBox23->Text = "kuribo";
	textBox24->Text = "kuribo";
	textBox25->Text = "kuribo";

	checkBox24->Checked = true;
	textBox27->Text = "walk";

	checkBox25->Checked = false;
	checkBox26->Checked = true;
	checkBox27->Checked = true;
	checkBox28->Checked = false;
	checkBox29->Checked = false;
	checkBox31->Checked = false;
	checkBox32->Checked = false;

	comboBox1->Text = "Most general sprites";
	comboBox2->Text = "Enemy";

	textBox28->Text = "1.0";
	textBox29->Text = "1.0";
	textBox30->Text = "0.0";
	textBox31->Text = "0.0";

	textBox32->Text = "1.0";
	textBox33->Text = "1.0";
	textBox34->Text = "1.0";



	checkBox1->Checked = true;
	checkBox2->Checked = true;
	checkBox3->Checked = true;
	checkBox4->Checked = true;
	checkBox5->Checked = true;
	checkBox6->Checked = true;
	checkBox7->Checked = true;
	checkBox8->Checked = true;
	checkBox9->Checked = true;
	checkBox10->Checked = true;
	checkBox11->Checked = true;
	checkBox12->Checked = true;
	checkBox13->Checked = true;
	checkBox14->Checked = true;
	checkBox15->Checked = true;
	checkBox16->Checked = true;
	checkBox17->Checked = true;
	checkBox18->Checked = true;
	checkBox19->Checked = true;
	checkBox20->Checked = true;
	checkBox21->Checked = true;
	checkBox22->Checked = true;
}

	   void openFileOnStart(String^ path)
	   {
		   System::IO::StreamReader^ sr;

		   sr = System::IO::File::OpenText(path);
		   array<String^>^ datas = gcnew array<String^>(73);
		   for (int count = 0; count < 73; count++)
		   {
			   datas[count] = sr->ReadLine();
		   }
		   if (datas[72] != "v2")
		   {
			   auto result = MessageBox::Show("The file you are trying to open is outdated or corrupted.\nDo you still want to open it?", "Warning", MessageBoxButtons::YesNo);
			   if (result == System::Windows::Forms::DialogResult::No)
			   {
				   return;
			   }
		   }
		   //Values from nsc file

		   textBox5->Text = datas[0];
		   textBox1->Text = datas[1];
		   textBox2->Text = datas[2];
		   textBox3->Text = datas[3];
		   textBox4->Text = datas[4];
		   textBox6->Text = datas[5];
		   textBox7->Text = datas[6];
		   textBox8->Text = datas[7];
		   textBox9->Text = datas[8];
		   textBox10->Text = datas[9];
		   textBox11->Text = datas[10];
		   textBox12->Text = datas[11];
		   textBox13->Text = datas[12];
		   textBox14->Text = datas[13];
		   textBox15->Text = datas[14];
		   textBox16->Text = datas[15];
		   textBox17->Text = datas[16];
		   if (datas[23] == "yes")
		   {
			   radioButton1->Checked = true;
			   radioButton2->Checked = false;
		   }
		   else
		   {
			   radioButton1->Checked = false;
			   radioButton2->Checked = true;
		   }


		   if (datas[24] == "yes")
			   checkBox1->Checked = true;
		   else
			   checkBox1->Checked = false;
		   if (datas[25] == "yes")
			   checkBox2->Checked = true;
		   else
			   checkBox2->Checked = false;
		   if (datas[26] == "yes")
			   checkBox3->Checked = true;
		   else
			   checkBox3->Checked = false;
		   if (datas[27] == "yes")
			   checkBox4->Checked = true;
		   else
			   checkBox4->Checked = false;
		   if (datas[28] == "yes")
			   checkBox5->Checked = true;
		   else
			   checkBox5->Checked = false;
		   if (datas[29] == "yes")
			   checkBox6->Checked = true;
		   else
			   checkBox6->Checked = false;
		   if (datas[30] == "yes")
			   checkBox7->Checked = true;
		   else
			   checkBox7->Checked = false;
		   if (datas[31] == "yes")
			   checkBox8->Checked = true;
		   else
			   checkBox8->Checked = false;
		   if (datas[32] == "yes")
			   checkBox9->Checked = true;
		   else
			   checkBox9->Checked = false;
		   if (datas[33] == "yes")
			   checkBox10->Checked = true;
		   else
			   checkBox10->Checked = false;
		   if (datas[34] == "yes")
			   checkBox11->Checked = true;
		   else
			   checkBox11->Checked = false;
		   if (datas[35] == "yes")
			   checkBox12->Checked = true;
		   else
			   checkBox12->Checked = false;
		   if (datas[36] == "yes")
			   checkBox13->Checked = true;
		   else
			   checkBox13->Checked = false;
		   if (datas[37] == "yes")
			   checkBox14->Checked = true;
		   else
			   checkBox14->Checked = false;
		   if (datas[38] == "yes")
			   checkBox15->Checked = true;
		   else
			   checkBox15->Checked = false;
		   if (datas[39] == "yes")
			   checkBox16->Checked = true;
		   else
			   checkBox16->Checked = false;
		   if (datas[40] == "yes")
			   checkBox17->Checked = true;
		   else
			   checkBox17->Checked = false;
		   if (datas[41] == "yes")
			   checkBox18->Checked = true;
		   else
			   checkBox18->Checked = false;
		   if (datas[42] == "yes")
			   checkBox19->Checked = true;
		   else
			   checkBox19->Checked = false;
		   if (datas[43] == "yes")
			   checkBox20->Checked = true;
		   else
			   checkBox20->Checked = false;
		   if (datas[44] == "yes")
			   checkBox21->Checked = true;
		   else
			   checkBox21->Checked = false;
		   if (datas[45] == "yes")
			   checkBox22->Checked = true;
		   else
			   checkBox22->Checked = false;
		   if (datas[46] == "yes")
			   checkBox23->Checked = true;
		   else
			   checkBox23->Checked = false;


		   textBox23->Text = datas[47];
		   textBox24->Text = datas[48];
		   textBox25->Text = datas[49];

		   array<char>^ binarycollision = gcnew array<char>(22);
		   unsigned int fullbinary = 0xFFC00000;

		   if (checkBox22->Checked)
			   binarycollision[0] = 1;
		   else
			   binarycollision[0] = 0;
		   if (checkBox1->Checked)
			   binarycollision[1] = 1;
		   else
			   binarycollision[1] = 0;
		   if (checkBox2->Checked)
			   binarycollision[2] = 1;
		   else
			   binarycollision[2] = 0;
		   if (checkBox3->Checked)
			   binarycollision[3] = 1;
		   else
			   binarycollision[3] = 0;
		   if (checkBox4->Checked)
			   binarycollision[4] = 1;
		   else
			   binarycollision[4] = 0;
		   if (checkBox5->Checked)
			   binarycollision[5] = 1;
		   else
			   binarycollision[5] = 0;
		   if (checkBox6->Checked)
			   binarycollision[6] = 1;
		   else
			   binarycollision[6] = 0;
		   if (checkBox7->Checked)
			   binarycollision[7] = 1;
		   else
			   binarycollision[7] = 0;
		   if (checkBox8->Checked)
			   binarycollision[8] = 1;
		   else
			   binarycollision[8] = 0;
		   if (checkBox9->Checked)
			   binarycollision[9] = 1;
		   else
			   binarycollision[9] = 0;
		   if (checkBox10->Checked)
			   binarycollision[10] = 1;
		   else
			   binarycollision[10] = 0;
		   if (checkBox11->Checked)
			   binarycollision[11] = 1;
		   else
			   binarycollision[11] = 0;
		   if (checkBox12->Checked)
			   binarycollision[12] = 1;
		   else
			   binarycollision[12] = 0;
		   if (checkBox13->Checked)
			   binarycollision[13] = 1;
		   else
			   binarycollision[13] = 0;
		   if (checkBox14->Checked)
			   binarycollision[14] = 1;
		   else
			   binarycollision[14] = 0;
		   if (checkBox15->Checked)
			   binarycollision[15] = 1;
		   else
			   binarycollision[15] = 0;
		   if (checkBox16->Checked)
			   binarycollision[16] = 1;
		   else
			   binarycollision[16] = 0;
		   if (checkBox17->Checked)
			   binarycollision[17] = 1;
		   else
			   binarycollision[17] = 0;
		   if (checkBox18->Checked)
			   binarycollision[18] = 1;
		   else
			   binarycollision[18] = 0;
		   if (checkBox19->Checked)
			   binarycollision[19] = 1;
		   else
			   binarycollision[19] = 0;
		   if (checkBox20->Checked)
			   binarycollision[20] = 1;
		   else
			   binarycollision[20] = 0;
		   if (checkBox21->Checked)
			   binarycollision[21] = 1;
		   else
			   binarycollision[21] = 0;

		   fullbinary |= binarycollision[0];
		   fullbinary |= binarycollision[1] << 1;
		   fullbinary |= binarycollision[2] << 2;
		   fullbinary |= binarycollision[3] << 3;
		   fullbinary |= binarycollision[4] << 4;
		   fullbinary |= binarycollision[5] << 5;
		   fullbinary |= binarycollision[6] << 6;
		   fullbinary |= binarycollision[7] << 7;
		   fullbinary |= binarycollision[8] << 8;
		   fullbinary |= binarycollision[9] << 9;
		   fullbinary |= binarycollision[10] << 10;
		   fullbinary |= binarycollision[11] << 11;
		   fullbinary |= binarycollision[12] << 12;
		   fullbinary |= binarycollision[13] << 13;
		   fullbinary |= binarycollision[14] << 14;
		   fullbinary |= binarycollision[15] << 15;
		   fullbinary |= binarycollision[16] << 16;
		   fullbinary |= binarycollision[17] << 17;
		   fullbinary |= binarycollision[18] << 18;
		   fullbinary |= binarycollision[19] << 19;
		   fullbinary |= binarycollision[20] << 20;
		   fullbinary |= binarycollision[21] << 21;

		   String^ hexnum = fullbinary.ToString("X");

		   textBox26->Text = "0x" + hexnum;


		   comboBox1->Text = datas[50];
		   comboBox2->Text = datas[51];

		   if (datas[52] == "yes")
		   {
			   checkBox24->Checked = true;
		   }
		   else
		   {
			   checkBox24->Checked = false;
		   }

		   textBox27->Text = datas[53];

		   if (datas[54] == "yes")
			   checkBox25->Checked = true;
		   else
			   checkBox25->Checked = false;
		   if (datas[55] == "yes")
			   checkBox26->Checked = true;
		   else
			   checkBox26->Checked = false;
		   if (datas[56] == "yes")
			   checkBox27->Checked = true;
		   else
			   checkBox27->Checked = false;
		   if (datas[57] == "yes")
			   checkBox28->Checked = true;
		   else
			   checkBox28->Checked = false;
		   if (datas[58] == "yes")
			   checkBox29->Checked = true;
		   else
			   checkBox29->Checked = false;
		   if (datas[59] == "yes")
			   checkBox31->Checked = true;
		   else
			   checkBox31->Checked = false;
		   if (datas[60] == "yes")
			   checkBox32->Checked = true;
		   else
			   checkBox32->Checked = false;


		   //textBox28->Text, textBox29->Text, textBox30->Text, textBox31->Text, textBox32->Text, textBox33->Text, textBox34->Text

		   textBox28->Text = datas[61];
		   textBox29->Text = datas[62];
		   textBox30->Text = datas[63];
		   textBox31->Text = datas[64];
		   textBox32->Text = datas[65];
		   textBox33->Text = datas[66];
		   textBox34->Text = datas[67];

		   if (datas[69] == "r")
		   {
			   radioButton2->Checked = true;
			   radioButton1->Checked = false;
		   }
		   else
		   {
			   radioButton1->Checked = true;
			   radioButton2->Checked = false;
		   }
		   if (datas[55] == "yes")
			   checkBox26->Checked = true;
		   states instance2;
		   array<String^>^ foo = datas[70]->Split(',');
		   for (int i = 0; i < foo->Length; i++)
		   {
			   instance2.statesarr->Add(foo[i]);
		   }
		   if (datas[71] == "yes")
		   {
			   checkBox30->Checked = true;
		   }
		   else
		   {
			   checkBox30->Checked = false;
		   }
	   }


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	String^ betatext = "";

	if (beta)
	{
		betatext = " DEVDEBUG";
	}
	if (useminor2)
	{
		MyForm::Text = "NewSpriteCreator v" + VERSION_MAJOR + "." + VERSION_MINOR + "." + VERSION_MINOR2 + betatext;
	}
	else
		MyForm::Text = "NewSpriteCreator v" + VERSION_MAJOR + "." + VERSION_MINOR + betatext;
	
	textBox26->Text = "0xFFFFFFFF";

	//Change to ReplaceSprites
	textBox6->Enabled = false;
	textBox7->Enabled = false;
	textBox8->Enabled = false;
	textBox9->Enabled = false;
	textBox10->Enabled = false;
	textBox11->Enabled = false;
	textBox12->Enabled = false;
	textBox13->Enabled = false;
	textBox14->Enabled = false;
	textBox15->Enabled = false;
	textBox16->Enabled = false;


	textBox1->Enabled = false;
	textBox2->Enabled = false;

	checkBox26->Checked = true;

	label2->Enabled = false;
	label3->Enabled = false;
	label6->Enabled = false;
	label8->Enabled = false;
	label9->Enabled = false;
	label10->Enabled = false;
	label11->Enabled = false;
	label12->Enabled = false;
	label13->Enabled = false;
	label14->Enabled = false;
	label15->Enabled = false;
	label16->Enabled = false;
	label17->Enabled = false;

	groupBox1->Enabled = false;

	if (wasOpenedWithFile)
	{
		openFileOnStart(pathtostartfile);
	}

}

private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked)
	{
		textBox6->Enabled = false;
		textBox7->Enabled = false;
		textBox8->Enabled = false;
		textBox9->Enabled = false;
		textBox10->Enabled = false;
		textBox11->Enabled = false;
		textBox12->Enabled = false;
		textBox13->Enabled = false;
		textBox14->Enabled = false;
		textBox15->Enabled = false;
		textBox16->Enabled = false;


		textBox1->Enabled = false;
		textBox2->Enabled = false;

		checkBox26->Checked = true;

		label2->Enabled = false;
		label3->Enabled = false;
		label6->Enabled = false;
		label8->Enabled = false;
		label9->Enabled = false;
		label10->Enabled = false;
		label11->Enabled = false;
		label12->Enabled = false;
		label13->Enabled = false;
		label14->Enabled = false;
		label15->Enabled = false;
		label16->Enabled = false;
		label17->Enabled = false;

		groupBox1->Enabled = false;
	}
	else
	{
		textBox6->Enabled = true;
		textBox7->Enabled = true;
		textBox8->Enabled = true;
		textBox9->Enabled = true;
		textBox10->Enabled = true;
		textBox11->Enabled = true;
		textBox12->Enabled = true;
		textBox13->Enabled = true;
		textBox14->Enabled = true;
		textBox15->Enabled = true;
		textBox16->Enabled = true;


		textBox1->Enabled = true;
		textBox2->Enabled = true;


		checkBox26->Checked = false;

		label2->Enabled = true;
		label3->Enabled = true;
		label6->Enabled = true;
		label8->Enabled = true;
		label9->Enabled = true;
		label10->Enabled = true;
		label11->Enabled = true;
		label12->Enabled = true;
		label13->Enabled = true;
		label14->Enabled = true;
		label15->Enabled = true;
		label16->Enabled = true;
		label17->Enabled = true;

		groupBox1->Enabled = true;
	}
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked)
	{
		textBox6->Enabled = false;
		textBox7->Enabled = false;
		textBox8->Enabled = false;
		textBox9->Enabled = false;
		textBox10->Enabled = false;
		textBox11->Enabled = false;
		textBox12->Enabled = false;
		textBox13->Enabled = false;
		textBox14->Enabled = false;
		textBox15->Enabled = false;
		textBox16->Enabled = false;


		textBox1->Enabled = false;
		textBox2->Enabled = false;

		checkBox26->Checked = false;


		label2->Enabled = false;
		label3->Enabled = false;
		label6->Enabled = false;
		label8->Enabled = false;
		label9->Enabled = false;
		label10->Enabled = false;
		label11->Enabled = false;
		label12->Enabled = false;
		label13->Enabled = false;
		label14->Enabled = false;
		label15->Enabled = false;
		label16->Enabled = false;
		label17->Enabled = false;

		groupBox1->Enabled = false;
	}
	else
	{
		textBox6->Enabled = true;
		textBox7->Enabled = true;
		textBox8->Enabled = true;
		textBox9->Enabled = true;
		textBox10->Enabled = true;
		textBox11->Enabled = true;
		textBox12->Enabled = true;
		textBox13->Enabled = true;
		textBox14->Enabled = true;
		textBox15->Enabled = true;
		textBox16->Enabled = true;


		textBox1->Enabled = true;
		textBox2->Enabled = true;


		checkBox26->Checked = false;

		label2->Enabled = true;
		label3->Enabled = true;
		label6->Enabled = true;
		label8->Enabled = true;
		label9->Enabled = true;
		label10->Enabled = true;
		label11->Enabled = true;
		label12->Enabled = true;
		label13->Enabled = true;
		label14->Enabled = true;
		label15->Enabled = true;
		label16->Enabled = true;
		label17->Enabled = true;

		groupBox1->Enabled = true;
	}
}
private: System::Void documentationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ target = "https://horizon.miraheze.org/wiki/Creating_Codebases_for_Sprites"; 
	System::Diagnostics::Process::Start(target); //Open Website
}
private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox6->Text = "0";
	textBox7->Text = "0";
	textBox8->Text = "0";
	textBox9->Text = "0";
	textBox10->Text = "0x100";
	textBox11->Text = "0x100";
	textBox12->Text = "0";
	textBox13->Text = "0";
	textBox14->Text = "0";
	textBox15->Text = "0";
	textBox16->Text = "0";

	radioButton2->Checked = true;
	radioButton1->Checked = false;

	checkBox23->Checked = false;
	textBox23->Text = "";
	textBox24->Text = "";
	textBox25->Text = "";

	checkBox1->Checked = true;
	checkBox2->Checked = true;
	checkBox3->Checked = true;
	checkBox4->Checked = true;
	checkBox5->Checked = true;
	checkBox6->Checked = true;
	checkBox7->Checked = true;
	checkBox8->Checked = true;
	checkBox9->Checked = true;
	checkBox10->Checked = true;
	checkBox11->Checked = true;
	checkBox12->Checked = true;
	checkBox13->Checked = true;
	checkBox14->Checked = true;
	checkBox15->Checked = true;
	checkBox16->Checked = true;
	checkBox17->Checked = true;
	checkBox18->Checked = true;
	checkBox19->Checked = true;
	checkBox20->Checked = true;
	checkBox21->Checked = true;
	checkBox22->Checked = true;

	textBox26->Text = "0xFFFFFFFF";

	comboBox1->Text = "Most general sprites";
	comboBox2->Text = "Player";
	checkBox24->Checked = false;
	label30->Enabled = false;
	textBox27->Enabled = false;
	textBox27->Text = "";

	textBox28->Text = "0.0";
	textBox29->Text = "0.0";
	textBox30->Text = "0.0";
	textBox31->Text = "0.0";
	textBox32->Text = "1.0";
	textBox33->Text = "1.0";
	textBox34->Text = "1.0";

	checkBox25->Checked = false;
	checkBox26->Checked = true;
	checkBox27->Checked = false;
	checkBox28->Checked = false;
	checkBox29->Checked = false;
	checkBox31->Checked = false;
	checkBox32->Checked = false;


	states instance3;
	instance3.statesarr->Clear();

	checkBox30->Checked = false;

	header hinstance3;
	hinstance3.headerarr->Clear();

	checkBox33->Checked = false;
	
	
	label7->Text = "No code generated yet!";

}
private: System::Void saveProjectAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	


	SaveFileDialog^ sfd = gcnew SaveFileDialog();
	String^ ifnewsprites;
	array<String^>^ collisions = gcnew array<String^>(22);
	String^ hasmodelyesno;
	String^ haschryesno;
	String^ hname;

	//Includes
	String^ ch = "";
	String^ gh = "";
	String^ g3dh = "";
	String^ sfxh = "";
	String^ sh = "";
	String^ bh = "";
	String^ csh = "";

	//Replace or More Sprites
	String^ replaceormore;
	if (radioButton2->Checked)
	{
		replaceormore = "r";
	}
	else
	{
		replaceormore = "m";
	}
	
	if (checkBox25->Checked)
	{
		ch = "yes";
	}
	if (checkBox26->Checked)
	{
		gh = "yes";
	}
	if (checkBox27->Checked)
	{
		g3dh = "yes";
	}
	if (checkBox28->Checked)
	{
		sfxh = "yes";
	}
	if (checkBox29->Checked)
	{
		sh = "yes";
	}
	if (checkBox31->Checked)
	{
		bh = "yes";
	}
	if (checkBox32->Checked)
	{
		csh = "yes";
	}




	for (int i; i < 22; i++)
	{
		collisions[i] = "no";
	}

	if (radioButton1->Checked == true) //NewSprites
		ifnewsprites = "yes";
	else
	{
		ifnewsprites = "no";
	}

	if (checkBox22->Checked)
		collisions[21] = "yes";
	if (checkBox1->Checked)
		collisions[0] = "yes";
	if (checkBox2->Checked)
		collisions[1] = "yes";
	if (checkBox3->Checked)
		collisions[2] = "yes";
	if (checkBox4->Checked)
		collisions[3] = "yes";
	if (checkBox5->Checked)
		collisions[4] = "yes";
	if (checkBox6->Checked)
		collisions[5] = "yes";
	if (checkBox7->Checked)
		collisions[6] = "yes";
	if (checkBox8->Checked)
		collisions[7] = "yes";
	if (checkBox9->Checked)
		collisions[8] = "yes";
	if (checkBox10->Checked)
		collisions[9] = "yes";
	if (checkBox11->Checked)
		collisions[10] = "yes";
	if (checkBox12->Checked)
		collisions[11] = "yes";
	if (checkBox13->Checked)
		collisions[12] = "yes";
	if (checkBox14->Checked)
		collisions[13] = "yes";
	if (checkBox15->Checked)
		collisions[14] = "yes";
	if (checkBox16->Checked)
		collisions[15] = "yes";
	if (checkBox17->Checked)
		collisions[16] = "yes";
	if (checkBox18->Checked)
		collisions[17] = "yes";
	if (checkBox19->Checked)
		collisions[18] = "yes";
	if (checkBox20->Checked)
		collisions[19] = "yes";
	if (checkBox21->Checked)
		collisions[20] = "yes";
	
	if (checkBox23->Checked)
	{
		hasmodelyesno = "yes";
	}
	else
	{
		hasmodelyesno = "no";
	}

	if (checkBox24->Checked)
	{
		haschryesno = "yes";
	}
	else
	{
		haschryesno = "no";
	}
	states instance;
	String^ fullstatestring = "";
	bool firstrun = true;
	for each (String^ i in instance.statesarr)
	{
		if (firstrun) { fullstatestring = i; }
		else { fullstatestring = fullstatestring + "," + i; }
		firstrun = false;
	}
	//textBox5->Text = fullstatestring;

	String^ activatestates;
	if (checkBox30->Checked)
	{
		activatestates = "yes";
	}
	else
	{
		activatestates = "no";
	}

	header hinstance;
	String^ fullheaderstring = "";
	firstrun = true;
	for each (String ^ i in hinstance.headerarr)
	{
		if (firstrun) { fullheaderstring = i; }
		else { fullheaderstring = fullheaderstring + "," + i; }
		firstrun = false;
	}
	String^ ap;
	if (checkBox33->Checked)
	{
		ap = "yes";
	}
	else
	{
		ap = "no";
	}


	array<String^>^ data = { textBox5->Text, textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox6->Text, textBox7->Text,
		textBox8->Text, textBox9->Text, textBox10->Text, textBox11->Text, textBox12->Text, textBox13->Text, textBox14->Text, textBox15->Text, textBox16->Text, textBox17->Text,
		"-", "-", "-", "-", "-", "-",  ifnewsprites, collisions[0], collisions[1], collisions[2],
		collisions[3], collisions[4], collisions[5], collisions[6], collisions[7], collisions[8], collisions[9], collisions[10], collisions[11], collisions[12], collisions[13], 
		collisions[14], collisions[15], collisions[16], collisions[17], collisions[18], collisions[19], collisions[20], collisions[21],
		hasmodelyesno, textBox23->Text, textBox24->Text, textBox25->Text, comboBox1->Text, comboBox2->Text, haschryesno, textBox27->Text,
		ch, gh, g3dh, sfxh, sh, bh, csh, textBox28->Text, textBox29->Text, textBox30->Text, textBox31->Text, textBox32->Text, textBox33->Text, textBox34->Text, fullheaderstring, replaceormore,
		fullstatestring, activatestates, "v2", ap };
	

	System::IO::StreamWriter^ sw;

	try
	{
		sfd->Filter = "NewSpriteCreator Files|*.nsc";
		sfd->Title = "Save Project As...";
		if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ path = sfd->FileName;
			try
			{
				//Prepare informations and save in string
				sw = gcnew System::IO::StreamWriter(path);




				for (int i = 0; i < data->Length; i++)
				{
					sw->WriteLine(data[i]);
				}
			}
			finally
			{
				sw->Close();
			}
		}
	}
	finally
	{
		delete sfd;
	}
}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ sfd = gcnew OpenFileDialog();

	sfd->Filter = "NewSpriteCreator Files|*.nsc";
	sfd->Title = "Open Project...";

	if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ path = sfd->FileName;
		System::IO::StreamReader^ sr;

		sr = System::IO::File::OpenText(path);
		array<String^>^ datas = gcnew array<String^>(74);
		for (int count = 0; count < 74; count++)
		{
			datas[count] = sr->ReadLine();
		}
		if (datas[72] != "v2")
		{
			auto result = MessageBox::Show("The file you are trying to open is outdated or corrupted.\nDo you still want to open it?", "Warning", MessageBoxButtons::YesNo);
			if (result == System::Windows::Forms::DialogResult::No)
			{
				return;
			}
		}

		//First set all values to 0 (NEW)
		textBox5->Text = "";
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox6->Text = "0";
		textBox7->Text = "0";
		textBox8->Text = "0";
		textBox9->Text = "0";
		textBox10->Text = "0x100";
		textBox11->Text = "0x100";
		textBox12->Text = "0";
		textBox13->Text = "0";
		textBox14->Text = "0";
		textBox15->Text = "0";
		textBox16->Text = "0";

		radioButton1->Checked = false;
		radioButton2->Checked = true;

		checkBox23->Checked = false;
		textBox23->Text = "";
		textBox24->Text = "";
		textBox25->Text = "";

		checkBox1->Checked = true;
		checkBox2->Checked = true;
		checkBox3->Checked = true;
		checkBox4->Checked = true;
		checkBox5->Checked = true;
		checkBox6->Checked = true;
		checkBox7->Checked = true;
		checkBox8->Checked = true;
		checkBox9->Checked = true;
		checkBox10->Checked = true;
		checkBox11->Checked = true;
		checkBox12->Checked = true;
		checkBox13->Checked = true;
		checkBox14->Checked = true;
		checkBox15->Checked = true;
		checkBox16->Checked = true;
		checkBox17->Checked = true;
		checkBox18->Checked = true;
		checkBox19->Checked = true;
		checkBox20->Checked = true;
		checkBox21->Checked = true;
		checkBox22->Checked = true;

		checkBox24->Checked = false;
		label30->Visible = false;
		textBox27->Visible = false;
		textBox27->Text = "";

		states instance3;
		instance3.statesarr->Clear();

		checkBox30->Checked = false;
		
		header hinstance3;
		hinstance3.headerarr->Clear();

		checkBox33->Checked = false;

		//Values from nsc file

		textBox5->Text = datas[0];
		textBox1->Text = datas[1];
		textBox2->Text = datas[2];
		textBox3->Text = datas[3];
		textBox4->Text = datas[4];
		textBox6->Text = datas[5];
		textBox7->Text = datas[6];
		textBox8->Text = datas[7];
		textBox9->Text = datas[8];
		textBox10->Text = datas[9];
		textBox11->Text = datas[10];
		textBox12->Text = datas[11];
		textBox13->Text = datas[12];
		textBox14->Text = datas[13];
		textBox15->Text = datas[14];
		textBox16->Text = datas[15];
		textBox17->Text = datas[16];
		if (datas[23] == "yes")
		{
			radioButton1->Checked = true;
			radioButton2->Checked = false;
		}
		else
		{
			radioButton1->Checked = false;
			radioButton2->Checked = true;
		}


		if (datas[24] == "yes")
			checkBox1->Checked = true;
		else
			checkBox1->Checked = false;
		if (datas[25] == "yes")
			checkBox2->Checked = true;
		else
			checkBox2->Checked = false;
		if (datas[26] == "yes")
			checkBox3->Checked = true;
		else
			checkBox3->Checked = false;
		if (datas[27] == "yes")
			checkBox4->Checked = true;
		else
			checkBox4->Checked = false;
		if (datas[28] == "yes")
			checkBox5->Checked = true;
		else
			checkBox5->Checked = false;
		if (datas[29] == "yes")
			checkBox6->Checked = true;
		else
			checkBox6->Checked = false;
		if (datas[30] == "yes")
			checkBox7->Checked = true;
		else
			checkBox7->Checked = false;
		if (datas[31] == "yes")
			checkBox8->Checked = true;
		else
			checkBox8->Checked = false;
		if (datas[32] == "yes")
			checkBox9->Checked = true;
		else
			checkBox9->Checked = false;
		if (datas[33] == "yes")
			checkBox10->Checked = true;
		else
			checkBox10->Checked = false;
		if (datas[34] == "yes")
			checkBox11->Checked = true;
		else
			checkBox11->Checked = false;
		if (datas[35] == "yes")
			checkBox12->Checked = true;
		else
			checkBox12->Checked = false;
		if (datas[36] == "yes")
			checkBox13->Checked = true;
		else
			checkBox13->Checked = false;
		if (datas[37] == "yes")
			checkBox14->Checked = true;
		else
			checkBox14->Checked = false;
		if (datas[38] == "yes")
			checkBox15->Checked = true;
		else
			checkBox15->Checked = false;
		if (datas[39] == "yes")
			checkBox16->Checked = true; 
		else
			checkBox16->Checked = false;
		if (datas[40] == "yes")
			checkBox17->Checked = true;
		else
			checkBox17->Checked = false;
		if (datas[41] == "yes")
			checkBox18->Checked = true;
		else
			checkBox18->Checked = false;
		if (datas[42] == "yes")
			checkBox19->Checked = true;
		else
			checkBox19->Checked = false;
		if (datas[43] == "yes")
			checkBox20->Checked = true;
		else
			checkBox20->Checked = false;
		if (datas[44] == "yes")
			checkBox21->Checked = true;
		else
			checkBox21->Checked = false;
		if (datas[45] == "yes")
			checkBox22->Checked = true;
		else
			checkBox22->Checked = false;
		if (datas[46] == "yes")
			checkBox23->Checked = true;
		else
			checkBox23->Checked = false;
		
		
		textBox23->Text = datas[47];
		textBox24->Text = datas[48];
		textBox25->Text = datas[49];
		//textBox35->Text = datas[68];

		array<char>^ binarycollision = gcnew array<char>(22);
		unsigned int fullbinary = 0xFFC00000;

		if (checkBox22->Checked)
			binarycollision[0] = 1;
		else
			binarycollision[0] = 0;
		if (checkBox1->Checked)
			binarycollision[1] = 1;
		else
			binarycollision[1] = 0;
		if (checkBox2->Checked)
			binarycollision[2] = 1;
		else
			binarycollision[2] = 0;
		if (checkBox3->Checked)
			binarycollision[3] = 1;
		else
			binarycollision[3] = 0;
		if (checkBox4->Checked)
			binarycollision[4] = 1;
		else
			binarycollision[4] = 0;
		if (checkBox5->Checked)
			binarycollision[5] = 1;
		else
			binarycollision[5] = 0;
		if (checkBox6->Checked)
			binarycollision[6] = 1;
		else
			binarycollision[6] = 0;
		if (checkBox7->Checked)
			binarycollision[7] = 1;
		else
			binarycollision[7] = 0;
		if (checkBox8->Checked)
			binarycollision[8] = 1;
		else
			binarycollision[8] = 0;
		if (checkBox9->Checked)
			binarycollision[9] = 1;
		else
			binarycollision[9] = 0;
		if (checkBox10->Checked)
			binarycollision[10] = 1;
		else
			binarycollision[10] = 0;
		if (checkBox11->Checked)
			binarycollision[11] = 1;
		else
			binarycollision[11] = 0;
		if (checkBox12->Checked)
			binarycollision[12] = 1;
		else
			binarycollision[12] = 0;
		if (checkBox13->Checked)
			binarycollision[13] = 1;
		else
			binarycollision[13] = 0;
		if (checkBox14->Checked)
			binarycollision[14] = 1;
		else
			binarycollision[14] = 0;
		if (checkBox15->Checked)
			binarycollision[15] = 1;
		else
			binarycollision[15] = 0;
		if (checkBox16->Checked)
			binarycollision[16] = 1;
		else
			binarycollision[16] = 0;
		if (checkBox17->Checked)
			binarycollision[17] = 1;
		else
			binarycollision[17] = 0;
		if (checkBox18->Checked)
			binarycollision[18] = 1;
		else
			binarycollision[18] = 0;
		if (checkBox19->Checked)
			binarycollision[19] = 1;
		else
			binarycollision[19] = 0;
		if (checkBox20->Checked)
			binarycollision[20] = 1;
		else
			binarycollision[20] = 0;
		if (checkBox21->Checked)
			binarycollision[21] = 1;
		else
			binarycollision[21] = 0;

		fullbinary |= binarycollision[0];
		fullbinary |= binarycollision[1] << 1;
		fullbinary |= binarycollision[2] << 2;
		fullbinary |= binarycollision[3] << 3;
		fullbinary |= binarycollision[4] << 4;
		fullbinary |= binarycollision[5] << 5;
		fullbinary |= binarycollision[6] << 6;
		fullbinary |= binarycollision[7] << 7;
		fullbinary |= binarycollision[8] << 8;
		fullbinary |= binarycollision[9] << 9;
		fullbinary |= binarycollision[10] << 10;
		fullbinary |= binarycollision[11] << 11;
		fullbinary |= binarycollision[12] << 12;
		fullbinary |= binarycollision[13] << 13;
		fullbinary |= binarycollision[14] << 14;
		fullbinary |= binarycollision[15] << 15;
		fullbinary |= binarycollision[16] << 16;
		fullbinary |= binarycollision[17] << 17;
		fullbinary |= binarycollision[18] << 18;
		fullbinary |= binarycollision[19] << 19;
		fullbinary |= binarycollision[20] << 20;
		fullbinary |= binarycollision[21] << 21;

		String^ hexnum = fullbinary.ToString("X");

		textBox26->Text = "0x" + hexnum;


		comboBox1->Text = datas[50];
		comboBox2->Text = datas[51];

		if (datas[52] == "yes")
		{
			checkBox24->Checked = true;
		}
		else
		{
			checkBox24->Checked = false;
		}

		textBox27->Text = datas[53];

		if (datas[54] == "yes")
			checkBox25->Checked = true;
		else
			checkBox25->Checked = false;
		if (datas[55] == "yes")
			checkBox26->Checked = true;
		else
			checkBox26->Checked = false;
		if (datas[56] == "yes")
			checkBox27->Checked = true;
		else
			checkBox27->Checked = false;
		if (datas[57] == "yes")
			checkBox28->Checked = true;
		else
			checkBox28->Checked = false;
		if (datas[58] == "yes")
			checkBox29->Checked = true;
		else
			checkBox29->Checked = false;
		if (datas[59] == "yes")
			checkBox31->Checked = true;
		else
			checkBox31->Checked = false;
		if (datas[60] == "yes")
			checkBox32->Checked = true;
		else
			checkBox32->Checked = false;


		//textBox28->Text, textBox29->Text, textBox30->Text, textBox31->Text, textBox32->Text, textBox33->Text, textBox34->Text

		textBox28->Text = datas[61];
		textBox29->Text = datas[62];
		textBox30->Text = datas[63];
		textBox31->Text = datas[64];
		textBox32->Text = datas[65];
		textBox33->Text = datas[66];
		textBox34->Text = datas[67];

		if (datas[69] == "r")
		{
			radioButton2->Checked = true;
			radioButton1->Checked = false;
		}
		else
		{
			radioButton1->Checked = true;
			radioButton2->Checked = false;
		}
		if (datas[55] == "yes")
			checkBox26->Checked = true;
		states instance2;
		array<String^>^ foo = datas[70]->Split(',');

		if (foo[0] != "") {
			for (int i = 0; i < foo->Length; i++)
			{
				instance2.statesarr->Add(foo[i]);
			}
		}
		if (datas[71] == "yes")
		{
			checkBox30->Checked = true;
		}
		else
		{
			checkBox30->Checked = false;
		}

		header hinstance2;
		array<String^>^ foo2 = datas[68]->Split(',');
		if (foo2[0] != "") {
			for (int i = 0; i < foo2->Length; i++)
			{
				hinstance2.headerarr->Add(foo2[i]);
			}
		}
		if (datas[73] == "yes")
		{
			checkBox33->Checked = true;
		}
		else
		{
			checkBox33->Checked = false;
		}
	}
}


private: System::Void checkBox23_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox23->Checked)
	{
		label27->Enabled = true;
		label28->Enabled = true;
		label29->Enabled = true;

		textBox23->Enabled = true;
		textBox24->Enabled = true;
		textBox25->Enabled = true;

		checkBox24->Enabled = true;

		textBox32->Enabled = true;
		textBox33->Enabled = true;
		textBox34->Enabled = true;
		/*
		textBox28->Enabled = true;
		textBox29->Enabled = true;
		textBox30->Enabled = true;
		textBox31->Enabled = true;
		*/
		//comboBox1->Enabled = true;
		comboBox2->Enabled = true;

		//label31->Enabled = true;
		label32->Enabled = true;
		/*
		label33->Enabled = true;
		label34->Enabled = true;
		label35->Enabled = true;
		label36->Enabled = true;
		*/
		label37->Enabled = true;
		label38->Enabled = true;
		label39->Enabled = true;

		button6->Enabled = true;


		if (checkBox24->Checked)
		{
			label30->Enabled = true;
			textBox27->Enabled = true;
		}
	}
	else if (checkBox23->Checked == false)
	{
		label27->Enabled = false;
		label28->Enabled = false;
		label29->Enabled = false;

		textBox23->Enabled = false;
		textBox24->Enabled = false;
		textBox25->Enabled = false;

		checkBox24->Enabled = false;
		label30->Enabled = false;
		textBox27->Enabled = false;


		textBox32->Enabled = false;
		textBox33->Enabled = false;
		textBox34->Enabled = false;


		textBox28->Enabled = false;
		textBox29->Enabled = false;
		textBox30->Enabled = false;
		textBox31->Enabled = false;

		checkBox24->Checked = false;

		comboBox1->Enabled = false;
		comboBox2->Enabled = false;

		label31->Enabled = false;
		label32->Enabled = false;
		label33->Enabled = false;
		label34->Enabled = false;
		label35->Enabled = false;
		label36->Enabled = false;
		label37->Enabled = false;
		label38->Enabled = false;
		label39->Enabled = false;

		button6->Enabled = false;
	}
}


public: void refresh()
{

}




private: System::Void checkBox22_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox17_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox18_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox19_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox20_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void checkBox21_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	System::Windows::Forms::Clipboard::SetText(textBox26->Text);
}
/*
private: System::Void textBox26_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	//To Int
	std::string test = msclr::interop::marshal_as<std::string>(textBox26->Text);
	//unsigned int x = Int32::Parse(test);
	unsigned int x = std::stoi(test);


	checkBox22->Checked = (bool)(x >> 0 & 1);
	checkBox1->Checked = (bool)(x >> 1 & 1);
	checkBox2->Checked = (bool)(x >> 2 & 1);
	checkBox3->Checked = (bool)(x >> 3 & 1);
	checkBox4->Checked = (bool)(x >> 4 & 1);
	checkBox5->Checked = (bool)(x >> 5 & 1);
	checkBox6->Checked = (bool)(x >> 6 & 1);
	checkBox7->Checked = (bool)(x >> 7 & 1);
	checkBox8->Checked = (bool)(x >> 8 & 1);
	checkBox9->Checked = (bool)(x >> 9 & 1);
	checkBox10->Checked = (bool)(x >> 10 & 1);
	checkBox11->Checked = (bool)(x >> 11 & 1);
	checkBox12->Checked = (bool)(x >> 12 & 1);
	checkBox13->Checked = (bool)(x >> 13 & 1);
	checkBox14->Checked = (bool)(x >> 14 & 1);
	checkBox15->Checked = (bool)(x >> 15 & 1);
	checkBox16->Checked = (bool)(x >> 16 & 1);
	checkBox17->Checked = (bool)(x >> 17 & 1);
	checkBox18->Checked = (bool)(x >> 18 & 1);
	checkBox19->Checked = (bool)(x >> 19 & 1);
	checkBox20->Checked = (bool)(x >> 20 & 1);
	checkBox21->Checked = (bool)(x >> 21 & 1);
}
*/
private: System::Void checkBox24_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (checkBox24->Checked)
	{
		label30->Enabled = true;
		textBox27->Enabled = true;
	}
	else
	{
		label30->Enabled = false;
		textBox27->Enabled = false;
	}

}
private: System::Void checkBox32_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox32->Checked)
	{
		//label40->Visible = true;
		//textBox35->Visible = true;
		button3->Enabled = true;
	}

	else
	{
		//label40->Visible = false;
		//textBox35->Visible = false;
		button3->Enabled = false;
	}
}
private: System::Void yAMLCreatorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ yamlform = gcnew yaml;
	yamlform->Show();
}
private: System::Void b_gotostates_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ statesform = gcnew states;
	statesform->Show();
}
private: System::Void checkBox30_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox30->Checked)
	{
		b_gotostates->Enabled = true;
		button9->Enabled = true;
	}
	else
	{
		b_gotostates->Enabled = false;
		button9->Enabled = false;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ headerform = gcnew header;
	headerform->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	checkBox1->Checked = true;
	checkBox2->Checked = true;
	checkBox3->Checked = true;
	checkBox4->Checked = true;
	checkBox5->Checked = true;
	checkBox6->Checked = true;
	checkBox7->Checked = true;
	checkBox8->Checked = true;
	checkBox9->Checked = true;
	checkBox10->Checked = true;
	checkBox11->Checked = true;
	checkBox12->Checked = true;
	checkBox13->Checked = true;
	checkBox14->Checked = true;
	checkBox15->Checked = true;
	checkBox16->Checked = true;
	checkBox17->Checked = true;
	checkBox18->Checked = true;
	checkBox19->Checked = true;
	checkBox20->Checked = true;
	checkBox21->Checked = true;
	checkBox22->Checked = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox5->Checked = false;
	checkBox6->Checked = false;
	checkBox7->Checked = false;
	checkBox8->Checked = false;
	checkBox9->Checked = false;
	checkBox10->Checked = false;
	checkBox11->Checked = false;
	checkBox12->Checked = false;
	checkBox13->Checked = false;
	checkBox14->Checked = false;
	checkBox15->Checked = false;
	checkBox16->Checked = false;
	checkBox17->Checked = false;
	checkBox18->Checked = false;
	checkBox19->Checked = false;
	checkBox20->Checked = false;
	checkBox21->Checked = false;
	checkBox22->Checked = false;
}
private: System::Void previewCodeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = textBox5->Text;
	String^ profileid = textBox1->Text;
	String^ spriteid = textBox2->Text;
	String^ classname = textBox3->Text;
	String^ arcnamelistname = textBox4->Text;
	String^ xoffset = textBox6->Text;
	String^ yoffset = textBox7->Text;
	String^ xDtC = textBox8->Text;
	String^ yDtC = textBox9->Text;
	String^ xDtE = textBox10->Text;
	String^ yDtE = textBox11->Text;
	String^ _1C = textBox12->Text;
	String^ _1E = textBox13->Text;
	String^ _20 = textBox14->Text;
	String^ _22 = textBox15->Text;
	String^ flags = textBox16->Text;
	String^ inheritanceclass = textBox17->Text;
	bool usestates = false;
	String^ state;
	String^ createstates;

	//Ab hier
	String^ statefunctions;
	String^ hasmodelvar = "";
	String^ loadmodel = "";
	String^ arcname = textBox23->Text;
	String^ brresname = textBox24->Text;
	String^ mdlname = textBox25->Text;
	String^ basicclass;
	String^ executefunc;
	String^ drawfunc;
	String^ createfunc;
	String^ updatemodelmatricesfunc;
	String^ arc;
	String^ chrload;

	String^ APxDtC = textBox28->Text;
	String^ APyDtC = textBox29->Text;
	String^ APxDtE = textBox30->Text;
	String^ APyDtE = textBox31->Text;

	String^ ScX = textBox34->Text;
	String^ ScY = textBox33->Text;
	String^ ScZ = textBox32->Text;



	String^ commonh = "";
	String^ gameh = "";
	String^ g3dhaxh = "";
	String^ sfxh = "";
	String^ stageh = "";
	String^ bossh = "";
	String^ customspriteh = "";

	if (checkBox30->Checked)
	{
		states instance;
		int foocounter = 0;
		for each (String ^ i in instance.statesarr)
		{
			foocounter++;
		}
		if (foocounter == 0)
		{
			checkBox30->Checked = false;
		}
		foocounter = 0;
	}
	if (checkBox32->Checked)
	{
		header instance;
		int foocounter = 0;
		for each (String ^ i in instance.headerarr)
		{
			foocounter++;
		}
		if (foocounter == 0)
		{
			checkBox32->Checked = false;
		}
		foocounter = 0;
	}
	if (checkBox25->Checked)
	{
		commonh = "#include <common.h>\n";
	}
	if (checkBox26->Checked)
	{
		gameh = "#include <game.h>\n";
	}
	if (checkBox27->Checked)
	{
		g3dhaxh = "#include <g3dhax.h>\n";
	}
	if (checkBox28->Checked)
	{
		sfxh = "#include <sfx.h>\n";
	}
	if (checkBox29->Checked)
	{
		stageh = "#include <stage.h>\n";
	}
	if (checkBox31->Checked)
	{
		bossh = "#include \"boss.h\"\n";
	}
	if (checkBox32->Checked)
	{
		header instance;
		int count = 0;
		for each (String ^ i in instance.headerarr)
		{
			count++;
		}
		bool firstrun = true;
		for (int i = 0; i < count; i++)
		{
			if (firstrun)
			{
				customspriteh = "#include \"" + instance.headerarr[i] + "\"\n";
			}
			else
			{
				customspriteh = customspriteh + "#include \"" + instance.headerarr[i] + "\"\n";
			}
			firstrun = false;
		}
		firstrun = true;
	}







	String^ category1 = "0";
	String^ category2 = "0";

	if (comboBox1->Text == "Player/Yoshi A")
		category1 = "0";
	else if (comboBox1->Text == "Player/Yoshi B")
		category1 = "1";
	else if (comboBox1->Text == "Most general sprites")
		category1 = "3";
	else if (comboBox1->Text == "Balloons")
		category1 = "4";
	else if (comboBox1->Text == "Collectibles/Coins")
		category1 = "5";
	else if (comboBox1->Text == "Player fireballs")
	{
		category1 = "6";
		category2 = "1";
	}
	else if (comboBox1->Text == "Player iceballs")
	{
		category1 = "6";
		category2 = "2";
	}

	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox22->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox1->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox2->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox3->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox4->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox5->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox6->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox7->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox8->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox9->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox10->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox11->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox12->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox13->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox14->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox15->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox16->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox17->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox18->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox19->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox20->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox21->Checked)
		binarycollision[21] = 1;
	else
		binarycollision[21] = 0;

	fullbinary |= binarycollision[0];
	fullbinary |= binarycollision[1] << 1;
	fullbinary |= binarycollision[2] << 2;
	fullbinary |= binarycollision[3] << 3;
	fullbinary |= binarycollision[4] << 4;
	fullbinary |= binarycollision[5] << 5;
	fullbinary |= binarycollision[6] << 6;
	fullbinary |= binarycollision[7] << 7;
	fullbinary |= binarycollision[8] << 8;
	fullbinary |= binarycollision[9] << 9;
	fullbinary |= binarycollision[10] << 10;
	fullbinary |= binarycollision[11] << 11;
	fullbinary |= binarycollision[12] << 12;
	fullbinary |= binarycollision[13] << 13;
	fullbinary |= binarycollision[14] << 14;
	fullbinary |= binarycollision[15] << 15;
	fullbinary |= binarycollision[16] << 16;
	fullbinary |= binarycollision[17] << 17;
	fullbinary |= binarycollision[18] << 18;
	fullbinary |= binarycollision[19] << 19;
	fullbinary |= binarycollision[20] << 20;
	fullbinary |= binarycollision[21] << 21;

	String^ hexnum = fullbinary.ToString("X");




	if (checkBox30->Checked)
	{
		usestates = true;
	}


	if (checkBox24->Checked)
	{
		chrload = "\n	nw4r::g3d::ResAnmChr anmChr = this->resFile.GetResAnmChr(\"" + textBox27->Text + "\");\n	this->animationChr.setup(mdl, anmChr, &this->allocator, 0);";
	}

	String^ ap;
	if (checkBox23->Checked)
	{
		hasmodelvar = "\n	mHeapAllocator_c allocator;\n	m3d::mdl_c bodyModel;\n	m3d::anmChr_c animationChr;\n	nw4r::g3d::ResFile resFile;\n\n";
		loadmodel = "	allocator.link(-1, GameHeaps[0], 0, 0x20);\n\n	resFile.data = getResource(\"" + arcname + "\", \"g3d/" + brresname + ".brres\");\n	nw4r::g3d::ResMdl mdl = this->resFile.GetResMdl(\"" + mdlname + "\");\n	bodyModel.setup(mdl, &allocator, 0x224, 1, 0);" + "\n	SetupTextures_" + comboBox2->Text + "(&bodyModel, 0);" + chrload + "\n\n	allocator.unlink(); \n\n	this->scale.x = " + ScX + "; \n	this->scale.y = " + ScY + "; \n	this->scale.z = " + ScZ + ";\n\n";

		arc = "\nconst char* " + arcnamelistname + " [] = { \"" + textBox23->Text + "\", NULL };\n\n";
	}
	else
	{
		hasmodelvar = "";
		loadmodel = "";
		arc = "";
	}
	if (checkBox33->Checked)
	{
		ap = "\n	ActivePhysics::Info HitMeBaby; \n	HitMeBaby.xDistToCenter = " + APxDtC + "; \n	HitMeBaby.yDistToCenter = " + APyDtC + "; \n	HitMeBaby.xDistToEdge = " + APxDtE + "; \n	HitMeBaby.yDistToEdge = " + APyDtE + "; \n	HitMeBaby.category1 = 0x" + category1 + "; \n	HitMeBaby.category2 = 0x" + category2 + "; \n	HitMeBaby.bitfield1 = 0x4F; \n	HitMeBaby.bitfield2 = 0x" + hexnum + "; \n	HitMeBaby.unkShort1C = 0; \n	HitMeBaby.callback = &dEn_c::collisionCallback; \n	this->aPhysics.initWithStruct(this, &HitMeBaby); \n	this->aPhysics.addToList();\n\n";
	}
	else
	{
		ap = "";
	}

	String^ includes = commonh + gameh + g3dhaxh + sfxh + stageh + bossh + customspriteh + "\n";

	String^ umminbaseicclas = "";
	if (checkBox23->Checked)
	{
		umminbaseicclas = "void updateModelMatrices();";
	}

	String^ baasurinbasicclass = "";
	String^ baasurset = "";
	String^ baasurfunction = "";
	if (checkBox24->Checked)
	{
		baasurinbasicclass = "void bindAnimChr_and_setUpdateRate(const char* name, int unk, float unk2, float rate);";
		baasurset = "	bindAnimChr_and_setUpdateRate(\"" + textBox27->Text + "\", 1, 0.0, 1.0);";
		baasurfunction = "\n\nvoid " + classname + "::bindAnimChr_and_setUpdateRate(const char* name, int unk, float unk2, float rate) {\n	nw4r::g3d::ResAnmChr anmChr = this->resFile.GetResAnmChr(name);\n	this->animationChr.bind(&this->bodyModel, anmChr, unk);\n	this->bodyModel.bindAnim(&this->animationChr, unk2);\n	this->animationChr.setUpdateRate(rate);\n}\n";
	}



	if (radioButton1->Checked)
	{
		basicclass = "class " + classname + " : public " + inheritanceclass +
			" {\npublic:\n\n	int onCreate();\n	int onExecute();\n	int onDelete();\n	int onDraw();\n\n	" + umminbaseicclas + "\n	" + baasurinbasicclass + "\n\n	static dActor_c* build();\n\n	//void playerCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n	//void spriteCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n	//void yoshiCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n\n	";


		basicclass = basicclass + "//bool collisionCat3_StarPower(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat5_Mario(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCatD_Drill(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat8_FencePunch(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat7_GroundPound(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat7_GroundPoundYoshi(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCatA_PenguinMario(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat11_PipeCannon(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat9_RollingObject(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat1_Fireball_E_Explosion(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat2_IceBall_15_YoshiIce(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat13_Hammer(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
		basicclass = basicclass + "//bool collisionCat14_YoshiFire(ActivePhysics *apThis, ActivePhysics *apOther); \n	";
	}
	else
	{
		basicclass = "class " + classname + " : public " + inheritanceclass +
			" {\npublic:\n\n	int onCreate();\n	int onExecute();\n	int onDelete();\n	int onDraw();\n\n	" + umminbaseicclas + "\n	" + baasurinbasicclass + "\n\n	static " + classname + "* build();\n\n	//void playerCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n	//void spriteCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n	//void yoshiCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n\n	" +
			"//bool collisionCat3_StarPower(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat5_Mario(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCatD_Drill(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat8_FencePunch(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat7_GroundPound(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat7_GroundPoundYoshi(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCatA_PenguinMario(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat11_PipeCannon(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat9_RollingObject(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat1_Fireball_E_Explosion(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat2_IceBall_15_YoshiIce(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat13_Hammer(ActivePhysics *apThis, ActivePhysics *apOther); \n	" +
			"//bool collisionCat14_YoshiFire(ActivePhysics *apThis, ActivePhysics *apOther);\n\n";
	}

	if (checkBox30->Checked)
	{
		states instance;
		createfunc = "\n\n	doStateChange(&StateID_" + instance.statesarr[0] + ");\n\n";
		if (checkBox23->Checked)
		{
			if (checkBox24->Checked)
				executefunc = "	acState.execute();\n\n	updateModelMatrices();\n	bodyModel._vf1C();\n\n	if (this->animationChr.isAnimationDone()) {\n		this->animationChr.setCurrentFrame(0.0);\n	}\n\n";
			else
				executefunc = "	acState.execute();\n\n	updateModelMatrices();\n	bodyModel._vf1C();\n\n";
		}
		else
		{
			executefunc = "	acState.execute();\n\n";
		}
	}
	else
	{
		if (checkBox23->Checked)
		{
			if (checkBox24->Checked)
				executefunc = "	updateModelMatrices();\n	bodyModel._vf1C();\n\n	if (this->animationChr.isAnimationDone()) {\n		this->animationChr.setCurrentFrame(0.0);\n	}\n\n";
			else
				executefunc = "	updateModelMatrices();\n	bodyModel._vf1C();\n\n";
		}
		else
		{
			executefunc = "";
		}


		createfunc = "";
	}
	if (checkBox23->Checked)
	{
		drawfunc = "	bodyModel.scheduleForDrawing();\n\n";
		updatemodelmatricesfunc = "\nvoid " + classname + "::updateModelMatrices() {\n	matrix.translation(pos.x, pos.y, pos.z);\n	matrix.applyRotationYXZ(&rot.x, &rot.y, &rot.z);\n\n	bodyModel.setDrawMatrix(matrix);\n	bodyModel.setScale(&scale);\n	bodyModel.calcWorld(false);\n}\n";
	}
	else
	{
		drawfunc = "";
		updatemodelmatricesfunc = "";
	}



	state = "";
	createstates = "";
	if (usestates)
	{
		states instance;
		int count = 0;
		for each (String ^ i in instance.statesarr)
		{
			count++;
		}
		bool firstrun = true;
		for (int i = 0; i < count; i++)
		{
			if (firstrun)
			{
				state = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + instance.statesarr[i] + ");\n";
			}
			else
			{
				state = state + "	DECLARE_STATE(" + instance.statesarr[i] + ");\n";
			}
			firstrun = false;
		}
		firstrun = true;

		for (int i = 0; i < count; i++)
		{
			if (firstrun)
			{
				createstates = "CREATE_STATE(" + classname + ", " + instance.statesarr[i] + ");\n";
			}
			else
			{
				createstates = createstates + "CREATE_STATE(" + classname + ", " + instance.statesarr[i] + ");\n";
			}
			firstrun = false;
		}
		firstrun = true;

		for (int i = 0; i < count; i++)
		{
			if (firstrun)
			{
				statefunctions = "\n\nvoid " + classname + "::beginState_" + instance.statesarr[i] + "() {}\n" + "void " + classname + "::executeState_" + instance.statesarr[i] + "() {}\n" + "void " + classname + "::endState_" + instance.statesarr[i] + "() {}";
			}
			else
			{
				statefunctions = statefunctions + "\n\nvoid " + classname + "::beginState_" + instance.statesarr[i] + "() {}\n" + "void " + classname + "::executeState_" + instance.statesarr[i] + "() {}\n" + "void " + classname + "::endState_" + instance.statesarr[i] + "() {}";
			}
			firstrun = false;
		}

	}
	String^ endclass = "};\n\n";

	String^ wholecode;
	if (radioButton1->Checked == true)
		wholecode = includes + arc + basicclass + hasmodelvar + state + endclass + createstates + updatemodelmatricesfunc + baasurfunction + "\ndActor_c* " + classname + "::build() {\n	void *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\n	return new(buffer) " + classname + ";\n}\n\n" + "const SpriteData " + name + "SpriteData = \n{ ProfileId::" + profileid + ", " + xoffset + ", " + yoffset + ", " + xDtC + ", " + yDtC + ", " + xDtE + ", " + yDtE + ", " + _1C + ", " + _1E + ", " + _20 + ", " + _22 + ", " + flags + " };\n\n" + "Profile " + name + "Profile(&" + classname + "::build, SpriteId::" + spriteid + ", &" + name + "SpriteData, ProfileId::" + profileid + ", ProfileId::" + profileid + ", \"" + name + "\", " + arcnamelistname + ");\n\n\n" + "int " + classname + "::onCreate() {\n" + loadmodel + ap + baasurset + createfunc + "\n\n	this->onExecute();\n\n	return true;\n}\n\n" + "int " + classname + "::onExecute() {\n" + executefunc + "	return true;" + "\n}\n\n" + "int " + classname + "::onDelete() {\n	return true;\n}\n\n" + "int " + classname + "::onDraw() {\n" + drawfunc + "	return true;" + "\n}" + statefunctions;

	else if (radioButton2->Checked == true)
		wholecode = includes + arc + basicclass + hasmodelvar + state + endclass + createstates + updatemodelmatricesfunc + baasurfunction + "\n" + classname + "* " + classname + "::build() {\n	void *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\n	return new(buffer) " + classname + ";\n}\n\n\n" + "int " + classname + "::onCreate() {\n" + loadmodel + ap + baasurset + createfunc + "\n\n	this->onExecute();\n\n	return true;\n}\n\n" + "int " + classname + "::onExecute() {\n" + executefunc + "	return true;" + "\n}\n\n" + "int " + classname + "::onDelete() {\n	return true;\n}\n\n" + "int " + classname + "::onDraw() {\n" + drawfunc + "	return true;" + "\n}" + statefunctions;

	preview pinstance;

	String^ line = state->Replace("\t", "");
	line = line + "\n";

	switch (previewusage)
	{
	case 0:
		pinstance.code = wholecode;
		break;
	case 1:
		pinstance.code = ap;
		break;
	case 2:
		pinstance.code = loadmodel;
		break;
	case 3:
		pinstance.code = includes;
		break;
	case 4:
		pinstance.code = line + createstates + statefunctions;
		break;
	default:
		break;
	}

	Form^ previewform = gcnew preview;
	previewform->Show();
	previewusage = 0;
}



private: System::Void checkBox33_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox33->Checked)
	{
		
		textBox28->Enabled = true;
		textBox29->Enabled = true;
		textBox30->Enabled = true;
		textBox31->Enabled = true;

		comboBox1->Enabled = true;
		
		label31->Enabled = true;
	
		label33->Enabled = true;
		label34->Enabled = true;
		label35->Enabled = true;
		label36->Enabled = true;

		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		checkBox16->Enabled = true;
		checkBox17->Enabled = true;
		checkBox18->Enabled = true;
		checkBox19->Enabled = true;
		checkBox20->Enabled = true;
		checkBox21->Enabled = true;
		checkBox22->Enabled = true;
		
		button2->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;

		label26->Enabled = true;
		textBox26->Enabled = true;

		button7->Enabled = true;

		button10->Enabled = true;
	}
	else
	{
		textBox28->Enabled = false;
		textBox29->Enabled = false;
		textBox30->Enabled = false;
		textBox31->Enabled = false;

		comboBox1->Enabled = false;

		label31->Enabled = false;

		label33->Enabled = false;
		label34->Enabled = false;
		label35->Enabled = false;
		label36->Enabled = false;

		checkBox1->Enabled = false;
		checkBox2->Enabled = false;
		checkBox3->Enabled = false;
		checkBox4->Enabled = false;
		checkBox5->Enabled = false;
		checkBox6->Enabled = false;
		checkBox7->Enabled = false;
		checkBox8->Enabled = false;
		checkBox9->Enabled = false;
		checkBox10->Enabled = false;
		checkBox11->Enabled = false;
		checkBox12->Enabled = false;
		checkBox13->Enabled = false;
		checkBox14->Enabled = false;
		checkBox15->Enabled = false;
		checkBox16->Enabled = false;
		checkBox17->Enabled = false;
		checkBox18->Enabled = false;
		checkBox19->Enabled = false;
		checkBox20->Enabled = false;
		checkBox21->Enabled = false;
		checkBox22->Enabled = false;

		button2->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;

		label26->Enabled = false;
		textBox26->Enabled = false;

		button7->Enabled = false;

		button10->Enabled = false;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	previewusage = 2;
	previewCodeToolStripMenuItem_Click(sender, e);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	previewusage = 1;
	previewCodeToolStripMenuItem_Click(sender, e);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	previewusage = 3;
	previewCodeToolStripMenuItem_Click(sender, e);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	previewusage = 4;
	previewCodeToolStripMenuItem_Click(sender, e);
}
private: System::Void spriteDataGeneratorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ settingsvarform = gcnew settingsvar;
	settingsvarform->Show();
}

public: String^ hex2binary(String^ hexvalue) { String^ binaryval = "";  binaryval = Convert::ToString(Convert::ToInt32(hexvalue, 16), 2);  return binaryval; }

private: System::Void textBox26_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ binstr = hex2binary(textBox26->Text);
	if (binstr->Length < 32)
		return;
	array<Char>^ arr = binstr->ToCharArray();
	arr->Reverse(arr);
	if (arr[0] == '1')
		checkBox22->Checked = true;
	else
		checkBox22->Checked = false;
	if (arr[1] == '1')
		checkBox1->Checked = true;
	else
		checkBox1->Checked = false;
	if (arr[2] == '1')
		checkBox2->Checked = true;
	else
		checkBox2->Checked = false;
	if (arr[3] == '1')
		checkBox3->Checked = true;
	else
		checkBox3->Checked = false;
	if (arr[4] == '1')
		checkBox4->Checked = true;
	else
		checkBox4->Checked = false;
	if (arr[5] == '1')
		checkBox5->Checked = true;
	else
		checkBox5->Checked = false;
	if (arr[6] == '1')
		checkBox6->Checked = true;
	else
		checkBox6->Checked = false;
	if (arr[7] == '1')
		checkBox7->Checked = true;
	else
		checkBox7->Checked = false;
	if (arr[8] == '1')
		checkBox8->Checked = true;
	else
		checkBox8->Checked = false;
	if (arr[9] == '1')
		checkBox9->Checked = true;
	else
		checkBox9->Checked = false;
	if (arr[10] == '1')
		checkBox10->Checked = true;
	else
		checkBox10->Checked = false;
	if (arr[11] == '1')
		checkBox11->Checked = true;
	else
		checkBox11->Checked = false;
	if (arr[12] == '1')
		checkBox12->Checked = true;
	else
		checkBox12->Checked = false;
	if (arr[13] == '1')
		checkBox13->Checked = true;
	else
		checkBox13->Checked = false;
	if (arr[14] == '1')
		checkBox14->Checked = true;
	else
		checkBox14->Checked = false;
	if (arr[15] == '1')
		checkBox15->Checked = true;
	else
		checkBox15->Checked = false;
	if (arr[16] == '1')
		checkBox16->Checked = true;
	else
		checkBox16->Checked = false;
	if (arr[17] == '1')
		checkBox17->Checked = true;
	else
		checkBox17->Checked = false;
	if (arr[18] == '1')
		checkBox18->Checked = true;
	else
		checkBox18->Checked = false;
	if (arr[19] == '1')
		checkBox19->Checked = true;
	else
		checkBox19->Checked = false;
	if (arr[20] == '1')
		checkBox20->Checked = true;
	else
		checkBox20->Checked = false;
	if (arr[21] == '1')
		checkBox21->Checked = true;
	else
		checkBox21->Checked = false;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox22->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox1->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox2->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox3->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox4->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox5->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox6->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox7->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox8->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox9->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox10->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox11->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox12->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox13->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox14->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox15->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox16->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox17->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox18->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox19->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox20->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox21->Checked)
		binarycollision[21] = 1;
	else
		binarycollision[21] = 0;

	fullbinary |= binarycollision[0];
	fullbinary |= binarycollision[1] << 1;
	fullbinary |= binarycollision[2] << 2;
	fullbinary |= binarycollision[3] << 3;
	fullbinary |= binarycollision[4] << 4;
	fullbinary |= binarycollision[5] << 5;
	fullbinary |= binarycollision[6] << 6;
	fullbinary |= binarycollision[7] << 7;
	fullbinary |= binarycollision[8] << 8;
	fullbinary |= binarycollision[9] << 9;
	fullbinary |= binarycollision[10] << 10;
	fullbinary |= binarycollision[11] << 11;
	fullbinary |= binarycollision[12] << 12;
	fullbinary |= binarycollision[13] << 13;
	fullbinary |= binarycollision[14] << 14;
	fullbinary |= binarycollision[15] << 15;
	fullbinary |= binarycollision[16] << 16;
	fullbinary |= binarycollision[17] << 17;
	fullbinary |= binarycollision[18] << 18;
	fullbinary |= binarycollision[19] << 19;
	fullbinary |= binarycollision[20] << 20;
	fullbinary |= binarycollision[21] << 21;

	String^ hexnum = fullbinary.ToString("X");

	textBox26->Text = "0x" + hexnum;
}
};
}
