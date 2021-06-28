#pragma once
#include "version.h"
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
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
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox22;
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
private: System::Windows::Forms::CheckBox^ checkBox23;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::ToolStripMenuItem^ saveProjectAsToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::Button^ button2;





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
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveProjectAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
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
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(645, 688);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(234, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(89, 202);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(234, 29);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(89, 286);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(234, 29);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(89, 370);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(234, 29);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(89, 538);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(234, 29);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(89, 118);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(234, 29);
			this->textBox5->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"ProfileID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(87, 258);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"SpriteID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(84, 342);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Classname";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(84, 510);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"ArcNameList";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(655, 766);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(215, 25);
			this->label7->TabIndex = 11;
			this->label7->Text = L"No code generated yet!";
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem, this->infoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1479, 38);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveAsToolStripMenuItem, this->saveProjectAsToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(62, 34);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(288, 40);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(288, 40);
			this->openToolStripMenuItem->Text = L"Open Project...";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(288, 40);
			this->saveAsToolStripMenuItem->Text = L"Save As...";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// saveProjectAsToolStripMenuItem
			// 
			this->saveProjectAsToolStripMenuItem->Name = L"saveProjectAsToolStripMenuItem";
			this->saveProjectAsToolStripMenuItem->Size = System::Drawing::Size(288, 40);
			this->saveProjectAsToolStripMenuItem->Text = L"Save Project As...";
			this->saveProjectAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveProjectAsToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->exampleToolStripMenuItem,
					this->documentationToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(74, 34);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// exampleToolStripMenuItem
			// 
			this->exampleToolStripMenuItem->Name = L"exampleToolStripMenuItem";
			this->exampleToolStripMenuItem->Size = System::Drawing::Size(275, 40);
			this->exampleToolStripMenuItem->Text = L"Example";
			this->exampleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exampleToolStripMenuItem_Click);
			// 
			// documentationToolStripMenuItem
			// 
			this->documentationToolStripMenuItem->Name = L"documentationToolStripMenuItem";
			this->documentationToolStripMenuItem->Size = System::Drawing::Size(275, 40);
			this->documentationToolStripMenuItem->Text = L"Documentation";
			this->documentationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::documentationToolStripMenuItem_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(88, 34);
			this->infoToolStripMenuItem->Text = L"About";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::infoToolStripMenuItem_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(495, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 25);
			this->label6->TabIndex = 13;
			this->label6->Text = L"X-Offset";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(495, 174);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 25);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Y-Offset";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(500, 118);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(79, 29);
			this->textBox6->TabIndex = 16;
			this->textBox6->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(500, 202);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(80, 29);
			this->textBox7->TabIndex = 17;
			this->textBox7->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(495, 258);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(198, 25);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Spawn Range (xDtC)";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(500, 286);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(80, 29);
			this->textBox8->TabIndex = 19;
			this->textBox8->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(495, 342);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(198, 25);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Spawn Range (yDtC)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(495, 426);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(196, 25);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Spawn Range (xDtE)";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(500, 370);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(80, 29);
			this->textBox9->TabIndex = 22;
			this->textBox9->Text = L"0";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(500, 454);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(80, 29);
			this->textBox10->TabIndex = 23;
			this->textBox10->Text = L"0x100";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(500, 538);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(79, 29);
			this->textBox11->TabIndex = 24;
			this->textBox11->Text = L"0x100";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(757, 118);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(79, 29);
			this->textBox12->TabIndex = 25;
			this->textBox12->Text = L"0";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(757, 202);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(79, 29);
			this->textBox13->TabIndex = 26;
			this->textBox13->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(496, 510);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(196, 25);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Spawn Range (yDtE)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(752, 90);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 25);
			this->label13->TabIndex = 29;
			this->label13->Text = L"_1C";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(752, 174);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(47, 25);
			this->label14->TabIndex = 30;
			this->label14->Text = L"_1E";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(752, 258);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(45, 25);
			this->label15->TabIndex = 31;
			this->label15->Text = L"_20";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(752, 342);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 25);
			this->label16->TabIndex = 32;
			this->label16->Text = L"_22";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(757, 286);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(79, 29);
			this->textBox14->TabIndex = 33;
			this->textBox14->Text = L"0";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(757, 370);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(79, 29);
			this->textBox15->TabIndex = 34;
			this->textBox15->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(752, 426);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(60, 25);
			this->label17->TabIndex = 35;
			this->label17->Text = L"Flags";
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::Window;
			this->textBox16->Location = System::Drawing::Point(757, 454);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(79, 29);
			this->textBox16->TabIndex = 36;
			this->textBox16->Text = L"0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(84, 426);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(112, 25);
			this->label18->TabIndex = 37;
			this->label18->Text = L"Base Class";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(89, 454);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(234, 29);
			this->textBox17->TabIndex = 38;
			this->textBox17->Text = L"dEn_c";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(175, 676);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(62, 29);
			this->numericUpDown1->TabIndex = 39;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(131, 648);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(68, 25);
			this->label19->TabIndex = 40;
			this->label19->Text = L"States";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(88, 676);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(81, 25);
			this->label20->TabIndex = 41;
			this->label20->Text = L"Number";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(118, 711);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(119, 29);
			this->textBox18->TabIndex = 42;
			this->textBox18->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(91, 714);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(23, 25);
			this->label21->TabIndex = 43;
			this->label21->Text = L"1";
			this->label21->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(91, 749);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(23, 25);
			this->label22->TabIndex = 45;
			this->label22->Text = L"2";
			this->label22->Visible = false;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(118, 746);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(119, 29);
			this->textBox19->TabIndex = 44;
			this->textBox19->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(91, 784);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(23, 25);
			this->label23->TabIndex = 47;
			this->label23->Text = L"3";
			this->label23->Visible = false;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(118, 781);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(119, 29);
			this->textBox20->TabIndex = 46;
			this->textBox20->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(91, 819);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(23, 25);
			this->label24->TabIndex = 49;
			this->label24->Text = L"4";
			this->label24->Visible = false;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(118, 816);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(119, 29);
			this->textBox21->TabIndex = 48;
			this->textBox21->Visible = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(91, 854);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(23, 25);
			this->label25->TabIndex = 51;
			this->label25->Text = L"5";
			this->label25->Visible = false;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(118, 851);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(119, 29);
			this->textBox22->TabIndex = 50;
			this->textBox22->Visible = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(684, 812);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(148, 29);
			this->radioButton1->TabIndex = 52;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"More Sprites";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(684, 857);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(174, 29);
			this->radioButton2->TabIndex = 53;
			this->radioButton2->Text = L"Replace Sprites";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(1014, 125);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(101, 29);
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
			this->checkBox2->Location = System::Drawing::Point(1014, 160);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(94, 29);
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
			this->checkBox3->Location = System::Drawing::Point(1014, 195);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(74, 29);
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
			this->checkBox4->Location = System::Drawing::Point(1014, 230);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(71, 29);
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
			this->checkBox5->Location = System::Drawing::Point(1014, 265);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(82, 29);
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
			this->checkBox6->Location = System::Drawing::Point(1014, 300);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(71, 29);
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
			this->checkBox7->Location = System::Drawing::Point(1014, 335);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(165, 29);
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
			this->checkBox8->Location = System::Drawing::Point(1014, 370);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(152, 29);
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
			this->checkBox9->Location = System::Drawing::Point(1014, 405);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(158, 29);
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
			this->checkBox10->Location = System::Drawing::Point(1014, 440);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(159, 29);
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
			this->checkBox11->Location = System::Drawing::Point(1215, 90);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(78, 29);
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
			this->checkBox12->Location = System::Drawing::Point(1215, 125);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(71, 29);
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
			this->checkBox13->Location = System::Drawing::Point(1215, 160);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(152, 29);
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
			this->checkBox14->Location = System::Drawing::Point(1215, 195);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(161, 29);
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
			this->checkBox15->Location = System::Drawing::Point(1215, 230);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(121, 29);
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
			this->checkBox16->Location = System::Drawing::Point(1215, 265);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(147, 29);
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
			this->checkBox17->Location = System::Drawing::Point(1215, 300);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(108, 29);
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
			this->checkBox18->Location = System::Drawing::Point(1215, 335);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(138, 29);
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
			this->checkBox19->Location = System::Drawing::Point(1215, 370);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(112, 29);
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
			this->checkBox20->Location = System::Drawing::Point(1215, 405);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(125, 29);
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
			this->checkBox21->Location = System::Drawing::Point(1215, 440);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(118, 29);
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
			this->checkBox22->Location = System::Drawing::Point(1014, 90);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(71, 29);
			this->checkBox22->TabIndex = 76;
			this->checkBox22->Text = L"\?\?\?";
			this->checkBox22->UseVisualStyleBackColor = true;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox22_CheckedChanged);
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->Location = System::Drawing::Point(390, 675);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(132, 29);
			this->checkBox23->TabIndex = 77;
			this->checkBox23->Text = L"Has Model";
			this->checkBox23->UseVisualStyleBackColor = true;
			this->checkBox23->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox23_CheckedChanged);
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(390, 710);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(121, 29);
			this->textBox23->TabIndex = 78;
			this->textBox23->Visible = false;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(390, 745);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(121, 29);
			this->textBox24->TabIndex = 79;
			this->textBox24->Visible = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(271, 713);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(113, 25);
			this->label27->TabIndex = 80;
			this->label27->Text = L"ARC-Name";
			this->label27->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(247, 748);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(137, 25);
			this->label28->TabIndex = 81;
			this->label28->Text = L"BRRES-Name";
			this->label28->Visible = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(260, 783);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(124, 25);
			this->label29->TabIndex = 82;
			this->label29->Text = L"MDL0-Name";
			this->label29->Visible = false;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(390, 780);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(121, 29);
			this->textBox25->TabIndex = 83;
			this->textBox25->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Location = System::Drawing::Point(464, 58);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(415, 534);
			this->groupBox1->TabIndex = 84;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Only More Sprites";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->textBox26);
			this->groupBox2->Location = System::Drawing::Point(981, 58);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(421, 615);
			this->groupBox2->TabIndex = 85;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Collisions";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(170, 550);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Copy";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(165, 477);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(80, 25);
			this->label26->TabIndex = 1;
			this->label26->Text = L"Bitfield2";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(131, 505);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(153, 29);
			this->textBox26->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Location = System::Drawing::Point(69, 58);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(279, 534);
			this->groupBox3->TabIndex = 86;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Basic Settings";
			// 
			// groupBox4
			// 
			this->groupBox4->Location = System::Drawing::Point(69, 608);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(473, 291);
			this->groupBox4->TabIndex = 87;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Extra Settings";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1479, 946);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->checkBox23);
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
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->numericUpDown1);
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
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"NewSpriteCreator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

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
		String^ state1;
		String^ state2;
		String^ state3;
		String^ state4;
		String^ state5;
		String^ states;
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

		array<char>^ binarycollision = gcnew array<char>(22);
		unsigned int fullbinary = 0xFFC00000;

		if (checkBox1->Checked)
			binarycollision[0] = 1;
		else
			binarycollision[0] = 0;
		if (checkBox2->Checked)
			binarycollision[1] = 1;
		else
			binarycollision[1] = 0;
		if (checkBox3->Checked)
			binarycollision[2] = 1;
		else
			binarycollision[2] = 0;
		if (checkBox4->Checked)
			binarycollision[3] = 1;
		else
			binarycollision[3] = 0;
		if (checkBox5->Checked)
			binarycollision[4] = 1;
		else
			binarycollision[4] = 0;
		if (checkBox6->Checked)
			binarycollision[5] = 1;
		else
			binarycollision[5] = 0;
		if (checkBox7->Checked)
			binarycollision[6] = 1;
		else
			binarycollision[6] = 0;
		if (checkBox8->Checked)
			binarycollision[7] = 1;
		else
			binarycollision[7] = 0;
		if (checkBox9->Checked)
			binarycollision[8] = 1;
		else
			binarycollision[8] = 0;
		if (checkBox10->Checked)
			binarycollision[9] = 1;
		else
			binarycollision[9] = 0;
		if (checkBox11->Checked)
			binarycollision[10] = 1;
		else
			binarycollision[10] = 0;
		if (checkBox12->Checked)
			binarycollision[11] = 1;
		else
			binarycollision[11] = 0;
		if (checkBox13->Checked)
			binarycollision[12] = 1;
		else
			binarycollision[12] = 0;
		if (checkBox14->Checked)
			binarycollision[13] = 1;
		else
			binarycollision[13] = 0;
		if (checkBox15->Checked)
			binarycollision[14] = 1;
		else
			binarycollision[14] = 0;
		if (checkBox16->Checked)
			binarycollision[15] = 1;
		else
			binarycollision[15] = 0;
		if (checkBox17->Checked)
			binarycollision[16] = 1;
		else
			binarycollision[16] = 0;
		if (checkBox18->Checked)
			binarycollision[17] = 1;
		else
			binarycollision[17] = 0;
		if (checkBox19->Checked)
			binarycollision[18] = 1;
		else
			binarycollision[18] = 0;
		if (checkBox20->Checked)
			binarycollision[19] = 1;
		else
			binarycollision[19] = 0;
		if (checkBox21->Checked)
			binarycollision[20] = 1;
		else
			binarycollision[20] = 0;
		if (checkBox22->Checked)
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




		if (numericUpDown1->Value > 0)
		{
			usestates = true;

			for (int i = 1; i <= numericUpDown1->Value; i++)
			{
				if (i == 1)
				{
					state1 = textBox18->Text;
				}
				else if (i == 2)
				{
					state2 = textBox19->Text;
				}
				else if (i == 3)
				{
					state3 = textBox20->Text;
				}
				else if (i == 4)
				{
					state4 = textBox21->Text;
				}
				else if (i == 5)
				{
					state5 = textBox22->Text;
				}
			}
		}

		if (checkBox23->Checked)
		{
			hasmodelvar = "\n	mHeapAllocator_c allocator;\n	m3d::mdl_c bodyModel;\n	m3d::anmChr_c chrAnimation;\n\n";
			loadmodel = "	allocator.link(-1, GameHeaps[0], 0, 0x20);\n\n	nw4r::g3d::ResFile rf(getResource(\"" + arcname + "\", \"g3d/" + brresname + ".brres\"));\n	bodyModel.setup(rf.GetResMdl(\"" + mdlname + "\"), &allocator, 0x224, 1, 0);" + "this->chrAnimation.setup(mdl, anmChr, &this->allocator, 0);\n\n	allocator.unlink();\n\n	ActivePhysics::Info HitMeBaby;\n	HitMeBaby.xDistToCenter = 0.0;\n	HitMeBaby.yDistToCenter = 0.0;\n	HitMeBaby.xDistToEdge = 12.0;\n	HitMeBaby.xDistToEdge = 0.0;\n	HitMeBaby.yDistToEdge = 15.0;\n	HitMeBaby.category1 = 0x5;\n	HitMeBaby.category2 = 0x0;\n	HitMeBaby.bitfield1 = 0x4F;\n	HitMeBaby.bitfield2 = 0x" + hexnum + ";\n	HitMeBaby.unkShort1C = 0;\n	HitMeBaby.callback = &dEn_c::collisionCallback;\n	this->aPhysics.initWithStruct(this, &HitMeBaby);\n	this->aPhysics.addToList();\n\n";
			arc = "const char* " + arcnamelistname + " [] = { " + textBox23->Text + ", NULL };\n\n";
		}
		else
		{
			hasmodelvar = "";
			loadmodel = "";
			arc = "";
		}

		String^ includes = "//#include <common.h>\n//#include <game.h>\n//#include <g3dhax.h>\n//#include <sfx.h>\n//#include <stage.h>\n//#include <profile.h>\n//#include \"boss.h\"\n\n//#include \"" + name + ".h" + "\"\n\n";



		if (radioButton1->Checked)
		{
			basicclass = "class " + classname + " : public " + inheritanceclass +
				" {\npublic:\n\n	int onCreate();\n	int onExecute();\n	int onDelete();\n	int onDraw();\n\n	static dActor_c* build();\n\n	//void playerCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n\n	" +
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
		else
		{
			basicclass = "class " + classname + " : public " + inheritanceclass +
				" {\npublic:\n\n	int onCreate();\n	int onExecute();\n	int onDelete();\n	int onDraw();\n\n	static " + classname + "* build();\n\n	//void playerCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n\n	" +
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

		if (numericUpDown1->Text == "1" || numericUpDown1->Text == "2" || numericUpDown1->Text == "3" || numericUpDown1->Text == "4" || numericUpDown1->Text == "5")
		{
			createfunc = "	doStateChange(&StateID_" + textBox18->Text + ");\n\n";
			if (checkBox23->Checked)
			{
				executefunc = "	acState.execute();\n\n	updateModelMatrices();\n	bodyModel._vf1C();\n\n";
			}
			else
			{
				executefunc = "	acState.execute();\n\n";
			}
		}
		else
		{
			executefunc = "";
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



		states = "";
		createstates = "";
		if (usestates)
		{
			if (numericUpDown1->Value == 1)
				states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n";
			else if (numericUpDown1->Value == 2)
				states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n" + "	DECLARE_STATE(" + state2 + ");\n";
			else if (numericUpDown1->Value == 3)
				states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n" + "	DECLARE_STATE(" + state2 + ");\n" + "	DECLARE_STATE(" + state3 + ");\n";
			else if (numericUpDown1->Value == 4)
				states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n" + "	DECLARE_STATE(" + state2 + ");\n" + "	DECLARE_STATE(" + state3 + ");\n" + "	DECLARE_STATE(" + state4 + ");\n";
			else if (numericUpDown1->Value == 5)
				states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n" + "	DECLARE_STATE(" + state2 + ");\n" + "	DECLARE_STATE(" + state3 + ");\n" + "	DECLARE_STATE(" + state4 + ");\n" + "	DECLARE_STATE(" + state5 + ");\n";

			if (numericUpDown1->Value == 1)
				createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n";
			else if (numericUpDown1->Value == 2)
				createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n" + "CREATE_STATE(" + classname + ", " + state2 + ");\n";
			else if (numericUpDown1->Value == 3)
				createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n" + "CREATE_STATE(" + classname + ", " + state2 + ");\n" + "CREATE_STATE(" + classname + ", " + state3 + ");\n";
			else if (numericUpDown1->Value == 4)
				createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n" + "CREATE_STATE(" + classname + ", " + state2 + ");\n" + "CREATE_STATE(" + classname + ", " + state3 + ");\n" + "CREATE_STATE(" + classname + ", " + state4 + ");\n";
			else if (numericUpDown1->Value == 5)
				createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n" + "CREATE_STATE(" + classname + ", " + state2 + ");\n" + "CREATE_STATE(" + classname + ", " + state3 + ");\n" + "CREATE_STATE(" + classname + ", " + state4 + ");\n" + "CREATE_STATE(" + classname + ", " + state5 + ");\n";
		}

		String^ endclass = "};\n\n";

		if (checkBox1->Checked)
		{
			if (numericUpDown1->Text == "1")
				statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n";
			else if (numericUpDown1->Text == "2")
				statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n" +
				"void " + classname + "::beginState_" + textBox19->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox19->Text + "() {}\n" + "void " + classname + "::endState_" + textBox19->Text + "() {}\n\n";
			else if (numericUpDown1->Text == "3")
				statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n" +
				"void " + classname + "::beginState_" + textBox19->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox19->Text + "() {}\n" + "void " + classname + "::endState_" + textBox19->Text + "() {}\n\n" +
				"void " + classname + "::beginState_" + textBox20->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox20->Text + "() {}\n" + "void " + classname + "::endState_" + textBox20->Text + "() {}\n\n";
			else if (numericUpDown1->Text == "4")
				statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n" +
				"void " + classname + "::beginState_" + textBox19->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox19->Text + "() {}\n" + "void " + classname + "::endState_" + textBox19->Text + "() {}\n\n" +
				"void " + classname + "::beginState_" + textBox20->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox20->Text + "() {}\n" + "void " + classname + "::endState_" + textBox20->Text + "() {}\n\n" +
				"void " + classname + "::beginState_" + textBox21->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox21->Text + "() {}\n" + "void " + classname + "::endState_" + textBox21->Text + "() {}\n\n";
			else if (numericUpDown1->Text == "5")
				statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n" +
				"void " + classname + "::beginState_" + textBox19->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox19->Text + "() {}\n" + "void " + classname + "::endState_" + textBox19->Text + "() {}\n\n" +
				"void " + classname + "::beginState_" + textBox20->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox20->Text + "() {}\n" + "void " + classname + "::endState_" + textBox20->Text + "() {}\n\n" +
				"void " + classname + "::beginState_" + textBox21->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox21->Text + "() {}\n" + "void " + classname + "::endState_" + textBox21->Text + "() {}\n\n" +
				"void " + classname + "::beginState_" + textBox22->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox22->Text + "() {}\n" + "void " + classname + "::endState_" + textBox22->Text + "() {}\n\n";
		}

		String^ wholecode;
		if (radioButton1->Checked == true)
			wholecode = includes + arc + basicclass + hasmodelvar + states + endclass + createstates + updatemodelmatricesfunc + "\ndActor_c* " + classname + "::build() {\n	void *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\n	return new(buffer) " + classname + ";\n}\n\n" + "const SpriteData " + name + "SpriteData = \n{ ProfileId::" + profileid + ", " + xoffset + ", " + yoffset + ", " + xDtC + ", " + yDtC + ", " + xDtE + ", " + yDtE + ", " + _1C + ", " + _1E + ", " + _20 + ", " + _22 + ", " + flags + " };\n\n" + "Profile " + name + "Profile(&" + classname + "::build, SpriteId::" + spriteid + ", " + name + "SpriteData, ProfileId::" + profileid + ", ProfileId::" + profileid + ", \"" + name + "\", " + arcnamelistname + ");\n\n\n" + "int " + classname + "::onCreate() {\n" + loadmodel + createfunc + "	return true;\n}\n\n" + "int " + classname + "::onExecute() {\n" + executefunc + "	return true;" + "\n}\n\n" + "int " + classname + "::onDelete() {\n	return true;\n}\n\n" + "int " + classname + "::onDraw() {\n" + drawfunc + "	return true;" + "\n}" + statefunctions;

		else if (radioButton2->Checked == true)
			wholecode = includes + arc + basicclass + hasmodelvar + states + endclass + createstates + updatemodelmatricesfunc + "\n" + classname + "* " + classname + "::build() {\n	void *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\n	return new(buffer) " + classname + ";\n}\n\n\n" + "int " + classname + "::onCreate() {\n" + loadmodel + createfunc + "	return true;\n}\n\n" + "int " + classname + "::onExecute() {\n" + executefunc + "	return true;" + "\n}\n\n" + "int " + classname + "::onDelete() {\n	return true;\n}\n\n" + "int " + classname + "::onDraw() {\n" + drawfunc + "	return true;" + "\n}" + statefunctions;

		System::Windows::Forms::Clipboard::SetText(wholecode);


		label7->Text = "Code copied to clipboard!";
	}
private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ msg = "NewSpriteCreator-GUI v" + VERSION_MAJOR + "." + VERSION_MINOR + "\nCoded by LiQ\n\n©New Super Mario Lost Worlds Team - 2021\nhttps://discord.gg/4s72Nnm";
	MessageBox::Show(msg, "About");
}

private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ path;

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
	String^ state1;
	String^ state2;
	String^ state3;
	String^ state4;
	String^ state5;
	String^ states;
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

	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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




	if (numericUpDown1->Value > 0)
	{
		usestates = true;

		for (int i = 1; i <= numericUpDown1->Value; i++)
		{
			if (i == 1)
			{
				state1 = textBox18->Text;
			}
			else if (i == 2)
			{
				state2 = textBox19->Text;
			}
			else if (i == 3)
			{
				state3 = textBox20->Text;
			}
			else if (i == 4)
			{
				state4 = textBox21->Text;
			}
			else if (i == 5)
			{
				state5 = textBox22->Text;
			}
		}
	}

	if (checkBox23->Checked)
	{
		hasmodelvar = "\n	mHeapAllocator_c allocator;\n	m3d::mdl_c bodyModel;\n	m3d::anmChr_c chrAnimation;\n\n";
		loadmodel = "	allocator.link(-1, GameHeaps[0], 0, 0x20);\n\n	nw4r::g3d::ResFile rf(getResource(\"" + arcname + "\", \"g3d/" + brresname + ".brres\"));\n	bodyModel.setup(rf.GetResMdl(\"" + mdlname + "\"), &allocator, 0x224, 1, 0);" + "this->chrAnimation.setup(mdl, anmChr, &this->allocator, 0);\n\n	allocator.unlink();\n\n	ActivePhysics::Info HitMeBaby;\n	HitMeBaby.xDistToCenter = 0.0;\n	HitMeBaby.yDistToCenter = 0.0;\n	HitMeBaby.xDistToEdge = 12.0;\n	HitMeBaby.xDistToEdge = 0.0;\n	HitMeBaby.yDistToEdge = 15.0;\n	HitMeBaby.category1 = 0x5;\n	HitMeBaby.category2 = 0x0;\n	HitMeBaby.bitfield1 = 0x4F;\n	HitMeBaby.bitfield2 = 0x" + hexnum + ";\n	HitMeBaby.unkShort1C = 0;\n	HitMeBaby.callback = &dEn_c::collisionCallback;\n	this->aPhysics.initWithStruct(this, &HitMeBaby);\n	this->aPhysics.addToList();\n\n";
		arc = "const char* " + arcnamelistname + " [] = { " + textBox23->Text + ", NULL };\n\n";
	}
	else
	{
		hasmodelvar = "";
		loadmodel = "";
		arc = "";
	}

	String^ includes = "//#include <common.h>\n//#include <game.h>\n//#include <g3dhax.h>\n//#include <sfx.h>\n//#include <stage.h>\n//#include <profile.h>\n//#include \"boss.h\"\n\n//#include \"" + name + ".h" + "\"\n\n";

	

	if (radioButton1->Checked)
	{
		basicclass = "class " + classname + " : public " + inheritanceclass +
			" {\npublic:\n\n	int onCreate();\n	int onExecute();\n	int onDelete();\n	int onDraw();\n\n	static dActor_c* build();\n\n	//void playerCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n\n	" +
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
	else
	{
		basicclass = "class " + classname + " : public " + inheritanceclass +
			" {\npublic:\n\n	int onCreate();\n	int onExecute();\n	int onDelete();\n	int onDraw();\n\n	static " + classname + "* build();\n\n	//void playerCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n\n	" +
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

	if (numericUpDown1->Text == "1" || numericUpDown1->Text == "2" || numericUpDown1->Text == "3" || numericUpDown1->Text == "4" || numericUpDown1->Text == "5")
	{
		createfunc = "	doStateChange(&StateID_" + textBox18->Text + ");\n\n";
		if (checkBox23->Checked)
		{
			executefunc = "	acState.execute();\n\n	updateModelMatrices();\n	bodyModel._vf1C();\n\n";
		}
		else
		{
			executefunc = "	acState.execute();\n\n";
		}
	}
	else
	{
		executefunc = "";
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



	states = "";
	createstates = "";
	if (usestates)
	{
		if (numericUpDown1->Value == 1)
			states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n";
		else if (numericUpDown1->Value == 2)
			states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n" + "	DECLARE_STATE(" + state2 + ");\n";
		else if (numericUpDown1->Value == 3)
			states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n" + "	DECLARE_STATE(" + state2 + ");\n" + "	DECLARE_STATE(" + state3 + ");\n";
		else if (numericUpDown1->Value == 4)
			states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n" + "	DECLARE_STATE(" + state2 + ");\n" + "	DECLARE_STATE(" + state3 + ");\n" + "	DECLARE_STATE(" + state4 + ");\n";
		else if (numericUpDown1->Value == 5)
			states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n" + "	DECLARE_STATE(" + state2 + ");\n" + "	DECLARE_STATE(" + state3 + ");\n" + "	DECLARE_STATE(" + state4 + ");\n" + "	DECLARE_STATE(" + state5 + ");\n";

		if (numericUpDown1->Value == 1)
			createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n";
		else if (numericUpDown1->Value == 2)
			createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n" + "CREATE_STATE(" + classname + ", " + state2 + ");\n";
		else if (numericUpDown1->Value == 3)
			createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n" + "CREATE_STATE(" + classname + ", " + state2 + ");\n" + "CREATE_STATE(" + classname + ", " + state3 + ");\n";
		else if (numericUpDown1->Value == 4)
			createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n" + "CREATE_STATE(" + classname + ", " + state2 + ");\n" + "CREATE_STATE(" + classname + ", " + state3 + ");\n" + "CREATE_STATE(" + classname + ", " + state4 + ");\n";
		else if (numericUpDown1->Value == 5)
			createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n" + "CREATE_STATE(" + classname + ", " + state2 + ");\n" + "CREATE_STATE(" + classname + ", " + state3 + ");\n" + "CREATE_STATE(" + classname + ", " + state4 + ");\n" + "CREATE_STATE(" + classname + ", " + state5 + ");\n";
	}

	String^ endclass = "};\n\n";

	if (checkBox1->Checked)
	{
		if (numericUpDown1->Text == "1")
			statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n";
		else if (numericUpDown1->Text == "2")
			statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox19->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox19->Text + "() {}\n" + "void " + classname + "::endState_" + textBox19->Text + "() {}\n\n";
		else if (numericUpDown1->Text == "3")
			statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox19->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox19->Text + "() {}\n" + "void " + classname + "::endState_" + textBox19->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox20->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox20->Text + "() {}\n" + "void " + classname + "::endState_" + textBox20->Text + "() {}\n\n";
		else if (numericUpDown1->Text == "4")
			statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox19->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox19->Text + "() {}\n" + "void " + classname + "::endState_" + textBox19->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox20->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox20->Text + "() {}\n" + "void " + classname + "::endState_" + textBox20->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox21->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox21->Text + "() {}\n" + "void " + classname + "::endState_" + textBox21->Text + "() {}\n\n";
		else if (numericUpDown1->Text == "5")
			statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox19->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox19->Text + "() {}\n" + "void " + classname + "::endState_" + textBox19->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox20->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox20->Text + "() {}\n" + "void " + classname + "::endState_" + textBox20->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox21->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox21->Text + "() {}\n" + "void " + classname + "::endState_" + textBox21->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox22->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox22->Text + "() {}\n" + "void " + classname + "::endState_" + textBox22->Text + "() {}\n\n";
	}

	String^ wholecode;
	if (radioButton1->Checked == true)
		wholecode = includes + arc + basicclass + hasmodelvar + states + endclass + createstates + updatemodelmatricesfunc + "\ndActor_c* " + classname + "::build() {\n	void *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\n	return new(buffer) " + classname + ";\n}\n\n" + "const SpriteData " + name + "SpriteData = \n{ ProfileId::" + profileid + ", " + xoffset + ", " + yoffset + ", " + xDtC + ", " + yDtC + ", " + xDtE + ", " + yDtE + ", " + _1C + ", " + _1E + ", " + _20 + ", " + _22 + ", " + flags + " };\n\n" + "Profile " + name + "Profile(&" + classname + "::build, SpriteId::" + spriteid + ", " + name + "SpriteData, ProfileId::" + profileid + ", ProfileId::" + profileid + ", \"" + name + "\", " + arcnamelistname + ");\n\n\n" + "int " + classname + "::onCreate() {\n" + loadmodel + createfunc + "	return true;\n}\n\n" + "int " + classname + "::onExecute() {\n" + executefunc + "	return true;" + "\n}\n\n" + "int " + classname + "::onDelete() {\n	return true;\n}\n\n" + "int " + classname + "::onDraw() {\n" + drawfunc + "	return true;" + "\n}" + statefunctions;

	else if (radioButton2->Checked == true)
		wholecode = includes + arc + basicclass + hasmodelvar + states + endclass + createstates + updatemodelmatricesfunc + "\n" + classname + "* " + classname + "::build() {\n	void *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\n	return new(buffer) " + classname + ";\n}\n\n\n" + "int " + classname + "::onCreate() {\n" + loadmodel + createfunc + "	return true;\n}\n\n" + "int " + classname + "::onExecute() {\n" + executefunc + "	return true;" + "\n}\n\n" + "int " + classname + "::onDelete() {\n	return true;\n}\n\n" + "int " + classname + "::onDraw() {\n" + drawfunc + "	return true;" + "\n}" + statefunctions;

	

	SaveFileDialog^ sfd = gcnew SaveFileDialog();

	try
	{
		sfd->Filter = "C++ Source Files|*.cpp|C++ Header Files|*.h|Text Files|*.txt|All Files|*.*";
		sfd->Title = "Save As...";
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
			MessageBox::Show("File saved successfully!");
		}
	}
	finally
	{
		delete sfd;
	}

}

private: System::Void copyToClipboardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
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
	String^ state1;
	String^ state2;
	String^ state3;
	String^ state4;
	String^ state5;
	String^ states;
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

	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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




	if (numericUpDown1->Value > 0)
	{
		usestates = true;

		for (int i = 1; i <= numericUpDown1->Value; i++)
		{
			if (i == 1)
			{
				state1 = textBox18->Text;
			}
			else if (i == 2)
			{
				state2 = textBox19->Text;
			}
			else if (i == 3)
			{
				state3 = textBox20->Text;
			}
			else if (i == 4)
			{
				state4 = textBox21->Text;
			}
			else if (i == 5)
			{
				state5 = textBox22->Text;
			}
		}
	}

	if (checkBox23->Checked)
	{
		hasmodelvar = "\n	mHeapAllocator_c allocator;\n	m3d::mdl_c bodyModel;\n	m3d::anmChr_c chrAnimation;\n\n";
		loadmodel = "	nw4r::g3d::ResFile rf(getResource(\"" + arcname + "\", \"g3d/" + brresname + ".brres\"));\n	bodyModel.setup(rf.GetResMdl(\"" + mdlname + "\"), &allocator, 0x224, 1, 0);" + "this->chrAnimation.setup(mdl, anmChr, &this->allocator, 0);\n\n	ActivePhysics::Info HitMeBaby;\n	HitMeBaby.xDistToCenter = 0.0;\n	HitMeBaby.yDistToCenter = 0.0;\n	HitMeBaby.xDistToEdge = 12.0;\n	HitMeBaby.xDistToEdge = 0.0;\n	HitMeBaby.yDistToEdge = 15.0;\n	HitMeBaby.category1 = 0x5;\n	HitMeBaby.category2 = 0x0;\n	HitMeBaby.bitfield1 = 0x4F;\n	HitMeBaby.bitfield2 = 0x" + hexnum + ";\n	HitMeBaby.unkShort1C = 0;\n	HitMeBaby.callback = &dEn_c::collisionCallback;\n	this->aPhysics.initWithStruct(this, &HitMeBaby);\n	this->aPhysics.addToList();\n\n";
	}
	else
	{
		hasmodelvar = "";
		loadmodel = "";
	}

	String^ includes = "//#include <common.h>\n//#include <game.h>\n//#include <g3dhax.h>\n//#include <sfx.h>\n//#include <stage.h>\n//#include <profile.h>\n//#include \"boss.h\"\n\n//#include \"" + name + ".h" + "\"\n\n";

	String^ arc = "const char* " + arcnamelistname + " [] = { NULL };\n\n";

	if (radioButton1->Checked)
	{
		basicclass = "class " + classname + " : public " + inheritanceclass +
			" {\npublic:\n\n	int onCreate();\n	int onExecute();\n	int onDelete();\n	int onDraw();\n\n	static dActor_c* build();\n\n	//void playerCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n\n	" +
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
	else
	{
		basicclass = "class " + classname + " : public " + inheritanceclass +
			" {\npublic:\n\n	int onCreate();\n	int onExecute();\n	int onDelete();\n	int onDraw();\n\n	static " + classname + "* build();\n\n	//void playerCollision(ActivePhysics *apThis, ActivePhysics *apOther);\n\n	" +
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

	if (numericUpDown1->Text == "1" || numericUpDown1->Text == "2" || numericUpDown1->Text == "3" || numericUpDown1->Text == "4" || numericUpDown1->Text == "5")
	{
		createfunc = "	doStateChange(&StateID_" + textBox18->Text + ");\n\n";
		if (checkBox23->Checked)
		{
			executefunc = "	acState.execute();\n\n	updateModelMatrices();\n	bodyModel._vf1C();\n\n";
		}
		else
		{
			executefunc = "	acState.execute();\n\n";
		}
	}
	else
	{
		executefunc = "";
		createfunc = "";
	}
	if (checkBox23->Checked)
	{
		drawfunc = "	bodyModel.scheduleForDrawing();\n\n";
	}
	else
	{
		drawfunc = "";
	}



	states = "";
	createstates = "";
	if (usestates)
	{
		if (numericUpDown1->Value == 1)
			states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n";
		else if (numericUpDown1->Value == 2)
			states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n" + "	DECLARE_STATE(" + state2 + ");\n";
		else if (numericUpDown1->Value == 3)
			states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n" + "	DECLARE_STATE(" + state2 + ");\n" + "	DECLARE_STATE(" + state3 + ");\n";
		else if (numericUpDown1->Value == 4)
			states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n" + "	DECLARE_STATE(" + state2 + ");\n" + "	DECLARE_STATE(" + state3 + ");\n" + "	DECLARE_STATE(" + state4 + ");\n";
		else if (numericUpDown1->Value == 5)
			states = "	USING_STATES(" + classname + ");\n" + "	DECLARE_STATE(" + state1 + ");\n" + "	DECLARE_STATE(" + state2 + ");\n" + "	DECLARE_STATE(" + state3 + ");\n" + "	DECLARE_STATE(" + state4 + ");\n" + "	DECLARE_STATE(" + state5 + ");\n";

		if (numericUpDown1->Value == 1)
			createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n";
		else if (numericUpDown1->Value == 2)
			createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n" + "CREATE_STATE(" + classname + ", " + state2 + ");\n";
		else if (numericUpDown1->Value == 3)
			createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n" + "CREATE_STATE(" + classname + ", " + state2 + ");\n" + "CREATE_STATE(" + classname + ", " + state3 + ");\n";
		else if (numericUpDown1->Value == 4)
			createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n" + "CREATE_STATE(" + classname + ", " + state2 + ");\n" + "CREATE_STATE(" + classname + ", " + state3 + ");\n" + "CREATE_STATE(" + classname + ", " + state4 + ");\n";
		else if (numericUpDown1->Value == 5)
			createstates = "CREATE_STATE(" + classname + ", " + state1 + ");\n" + "CREATE_STATE(" + classname + ", " + state2 + ");\n" + "CREATE_STATE(" + classname + ", " + state3 + ");\n" + "CREATE_STATE(" + classname + ", " + state4 + ");\n" + "CREATE_STATE(" + classname + ", " + state5 + ");\n";
	}

	String^ endclass = "};\n\n";

	if (checkBox1->Checked)
	{
		if (numericUpDown1->Text == "1")
			statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n";
		else if (numericUpDown1->Text == "2")
			statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox19->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox19->Text + "() {}\n" + "void " + classname + "::endState_" + textBox19->Text + "() {}\n\n";
		else if (numericUpDown1->Text == "3")
			statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox19->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox19->Text + "() {}\n" + "void " + classname + "::endState_" + textBox19->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox20->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox20->Text + "() {}\n" + "void " + classname + "::endState_" + textBox20->Text + "() {}\n\n";
		else if (numericUpDown1->Text == "4")
			statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox19->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox19->Text + "() {}\n" + "void " + classname + "::endState_" + textBox19->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox20->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox20->Text + "() {}\n" + "void " + classname + "::endState_" + textBox20->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox21->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox21->Text + "() {}\n" + "void " + classname + "::endState_" + textBox21->Text + "() {}\n\n";
		else if (numericUpDown1->Text == "5")
			statefunctions = "\n\nvoid " + classname + "::beginState_" + textBox18->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox18->Text + "() {}\n" + "void " + classname + "::endState_" + textBox18->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox19->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox19->Text + "() {}\n" + "void " + classname + "::endState_" + textBox19->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox20->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox20->Text + "() {}\n" + "void " + classname + "::endState_" + textBox20->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox21->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox21->Text + "() {}\n" + "void " + classname + "::endState_" + textBox21->Text + "() {}\n\n" +
			"void " + classname + "::beginState_" + textBox22->Text + "() {}\n" + "void " + classname + "::executeState_" + textBox22->Text + "() {}\n" + "void " + classname + "::endState_" + textBox22->Text + "() {}\n\n";
	}

	String^ wholecode;
	if (radioButton1->Checked == true)
		wholecode = includes + arc + basicclass + hasmodelvar + states + endclass + createstates + "\ndActor_c* " + classname + "::build() {\n	void *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\n	return new(buffer) " + classname + ";\n}\n\n" + "const SpriteData " + name + "SpriteData = \n{ ProfileId::" + profileid + ", " + xoffset + ", " + yoffset + ", " + xDtC + ", " + yDtC + ", " + xDtE + ", " + yDtE + ", " + _1C + ", " + _1E + ", " + _20 + ", " + _22 + ", " + flags + " };\n\n" + "Profile " + name + "Profile(&" + classname + "::build, SpriteId::" + spriteid + ", " + name + "SpriteData, ProfileId::" + profileid + ", ProfileId::" + profileid + ", \"" + name + "\", " + arcnamelistname + ");\n\n\n" + "int " + classname + "::onCreate() {\n" + loadmodel + createfunc + "	return true;\n}\n\n" + "int " + classname + "::onExecute() {\n" + executefunc + "	return true;" + "\n}\n\n" + "int " + classname + "::onDelete() {\n	return true;\n}\n\n" + "int " + classname + "::onDraw() {\n" + drawfunc + "	return true;" + "\n}" + statefunctions;

	else if (radioButton2->Checked == true)
		wholecode = includes + arc + basicclass + hasmodelvar + states + endclass + createstates + "\n" + classname + "* " + classname + "::build() {\n	void *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\n	return new(buffer) " + classname + ";\n}\n\n\n" + "int " + classname + "::onCreate() {\n" + loadmodel + createfunc + "	return true;\n}\n\n" + "int " + classname + "::onExecute() {\n" + executefunc + "	return true;" + "\n}\n\n" + "int " + classname + "::onDelete() {\n	return true;\n}\n\n" + "int " + classname + "::onDraw() {\n" + drawfunc + "	return true;" + "\n}" + statefunctions;

	System::Windows::Forms::Clipboard::SetText(wholecode);


	label7->Text = "Code copied to clipboard!";

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
	numericUpDown1->Text = "3";
	textBox18->Text = "Walk";
	textBox19->Text = "Turn";
	textBox20->Text = "Death";
	checkBox23->Checked = true;
	textBox23->Text = "kuribo";
	textBox24->Text = "kuribo";
	textBox25->Text = "kuribo";
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	MyForm::Text = "NewSpriteCreator v" + VERSION_MAJOR + "." + VERSION_MINOR;
	textBox26->Text = "0xFFFFFFFF";

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	if (numericUpDown1->Value < 1)
	{
		label21->Visible = false;
		textBox18->Visible = false;
	}
	if (numericUpDown1->Value == 1)
	{
		label21->Visible = true;
		textBox18->Visible = true;
		label22->Visible = false;
		textBox19->Visible = false;
		label23->Visible = false;
		textBox20->Visible = false;
		label24->Visible = false;
		textBox21->Visible = false;
		label25->Visible = false;
		textBox22->Visible = false;
	}
	if (numericUpDown1->Value == 2)
	{
		label21->Visible = true;
		textBox18->Visible = true;
		label22->Visible = true;
		textBox19->Visible = true;
		label23->Visible = false;
		textBox20->Visible = false;
		label24->Visible = false;
		textBox21->Visible = false;
		label25->Visible = false;
		textBox22->Visible = false;
	}
	if (numericUpDown1->Value == 3)
	{
		label21->Visible = true;
		textBox18->Visible = true;
		label22->Visible = true;
		textBox19->Visible = true;
		label23->Visible = true;
		textBox20->Visible = true;
		label24->Visible = false;
		textBox21->Visible = false;
		label25->Visible = false;
		textBox22->Visible = false;
	}
	if (numericUpDown1->Value == 4)
	{
		label21->Visible = true;
		textBox18->Visible = true;
		label22->Visible = true;
		textBox19->Visible = true;
		label23->Visible = true;
		textBox20->Visible = true;
		label24->Visible = true;
		textBox21->Visible = true;
		label25->Visible = false;
		textBox22->Visible = false;
	}
	if (numericUpDown1->Value == 5)
	{
		label21->Visible = true;
		textBox18->Visible = true;
		label22->Visible = true;
		textBox19->Visible = true;
		label23->Visible = true;
		textBox20->Visible = true;
		label24->Visible = true;
		textBox21->Visible = true;
		label25->Visible = true;
		textBox22->Visible = true;
	}
	if (numericUpDown1->Value > 5)
	{
		numericUpDown1->Value = 5;
	}
	if (numericUpDown1->Value < 0)
	{
		numericUpDown1->Value = 0;
	}

}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked)
	{
		groupBox1->Visible = false;
		label6->Visible = false;
		label8->Visible = false;
		label9->Visible = false;
		label10->Visible = false;
		label11->Visible = false;
		label12->Visible = false;
		label13->Visible = false;
		label14->Visible = false;
		label15->Visible = false;
		label16->Visible = false;
		label17->Visible = false;
		textBox6->Visible = false;
		textBox7->Visible = false;
		textBox8->Visible = false;
		textBox9->Visible = false;
		textBox10->Visible = false;
		textBox11->Visible = false;
		textBox12->Visible = false;
		textBox13->Visible = false;
		textBox14->Visible = false;
		textBox15->Visible = false;
		textBox16->Visible = false;
	}
	else
	{
		groupBox1->Visible = true;
		label6->Visible = true;
		label8->Visible = true;
		label9->Visible = true;
		label10->Visible = true;
		label11->Visible = true;
		label12->Visible = true;
		label13->Visible = true;
		label14->Visible = true;
		label15->Visible = true;
		label16->Visible = true;
		label17->Visible = true;
		textBox6->Visible = true;
		textBox7->Visible = true;
		textBox8->Visible = true;
		textBox9->Visible = true;
		textBox10->Visible = true;
		textBox11->Visible = true;
		textBox12->Visible = true;
		textBox13->Visible = true;
		textBox14->Visible = true;
		textBox15->Visible = true;
		textBox16->Visible = true;
	}
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked)
	{
		groupBox1->Visible = false;
		label6->Visible = false;
		label8->Visible = false;
		label9->Visible = false;
		label10->Visible = false;
		label11->Visible = false;
		label12->Visible = false;
		label13->Visible = false;
		label14->Visible = false;
		label15->Visible = false;
		label16->Visible = false;
		label17->Visible = false;
		textBox6->Visible = false;
		textBox7->Visible = false;
		textBox8->Visible = false;
		textBox9->Visible = false;
		textBox10->Visible = false;
		textBox11->Visible = false;
		textBox12->Visible = false;
		textBox13->Visible = false;
		textBox14->Visible = false;
		textBox15->Visible = false;
		textBox16->Visible = false;
	}
	else
	{
		groupBox1->Visible = true;
		label6->Visible = true;
		label8->Visible = true;
		label9->Visible = true;
		label10->Visible = true;
		label11->Visible = true;
		label12->Visible = true;
		label13->Visible = true;
		label14->Visible = true;
		label15->Visible = true;
		label16->Visible = true;
		label17->Visible = true;
		textBox6->Visible = true;
		textBox7->Visible = true;
		textBox8->Visible = true;
		textBox9->Visible = true;
		textBox10->Visible = true;
		textBox11->Visible = true;
		textBox12->Visible = true;
		textBox13->Visible = true;
		textBox14->Visible = true;
		textBox15->Visible = true;
		textBox16->Visible = true;
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
	numericUpDown1->Text = "0";
	label21->Visible = false;
	textBox18->Visible = false;
	label22->Visible = false;
	textBox19->Visible = false;
	label23->Visible = false;
	textBox20->Visible = false;
	label24->Visible = false;
	textBox21->Visible = false;
	label25->Visible = false;
	textBox22->Visible = false;

	radioButton1->Checked = true;
	radioButton2->Checked = false;

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

}
private: System::Void saveProjectAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	


	SaveFileDialog^ sfd = gcnew SaveFileDialog();
	String^ content;
	String^ ifnewsprites;
	array<String^>^ collisions = gcnew array<String^>(22);
	String^ hasmodelyesno;

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


	array<String^>^ data = { textBox5->Text, textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox6->Text, textBox7->Text,
		textBox8->Text, textBox9->Text, textBox10->Text, textBox11->Text, textBox12->Text, textBox13->Text, textBox14->Text, textBox15->Text, textBox16->Text, textBox17->Text,
		numericUpDown1->Text, textBox18->Text, textBox19->Text, textBox20->Text, textBox21->Text, textBox22->Text,  ifnewsprites, collisions[0], collisions[1], collisions[2],
		collisions[3], collisions[4], collisions[5], collisions[6], collisions[7], collisions[8], collisions[9], collisions[10], collisions[11], collisions[12], collisions[13], 
		collisions[14], collisions[15], collisions[16], collisions[17], collisions[18], collisions[19], collisions[20], collisions[21],
		hasmodelyesno, textBox23->Text, textBox24->Text, textBox25->Text };
	

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
			MessageBox::Show("File saved successfully!");
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
		array<String^>^ datas = gcnew array<String^>(50);
		for (int count = 0; count < 50; count++)
		{
			datas[count] = sr->ReadLine();
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
		numericUpDown1->Text = "0";
		label21->Visible = false;
		textBox18->Visible = false;
		label22->Visible = false;
		textBox19->Visible = false;
		label23->Visible = false;
		textBox20->Visible = false;
		label24->Visible = false;
		textBox21->Visible = false;
		label25->Visible = false;
		textBox22->Visible = false;

		radioButton1->Checked = true;
		radioButton2->Checked = false;

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
		numericUpDown1->Text = datas[17];
		textBox18->Text = datas[18];
		textBox19->Text = datas[19];
		textBox20->Text = datas[20];
		textBox21->Text = datas[21];
		textBox22->Text = datas[22];
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

		if (checkBox1->Checked)
			binarycollision[0] = 1;
		else
			binarycollision[0] = 0;
		if (checkBox2->Checked)
			binarycollision[1] = 1;
		else
			binarycollision[1] = 0;
		if (checkBox3->Checked)
			binarycollision[2] = 1;
		else
			binarycollision[2] = 0;
		if (checkBox4->Checked)
			binarycollision[3] = 1;
		else
			binarycollision[3] = 0;
		if (checkBox5->Checked)
			binarycollision[4] = 1;
		else
			binarycollision[4] = 0;
		if (checkBox6->Checked)
			binarycollision[5] = 1;
		else
			binarycollision[5] = 0;
		if (checkBox7->Checked)
			binarycollision[6] = 1;
		else
			binarycollision[6] = 0;
		if (checkBox8->Checked)
			binarycollision[7] = 1;
		else
			binarycollision[7] = 0;
		if (checkBox9->Checked)
			binarycollision[8] = 1;
		else
			binarycollision[8] = 0;
		if (checkBox10->Checked)
			binarycollision[9] = 1;
		else
			binarycollision[9] = 0;
		if (checkBox11->Checked)
			binarycollision[10] = 1;
		else
			binarycollision[10] = 0;
		if (checkBox12->Checked)
			binarycollision[11] = 1;
		else
			binarycollision[11] = 0;
		if (checkBox13->Checked)
			binarycollision[12] = 1;
		else
			binarycollision[12] = 0;
		if (checkBox14->Checked)
			binarycollision[13] = 1;
		else
			binarycollision[13] = 0;
		if (checkBox15->Checked)
			binarycollision[14] = 1;
		else
			binarycollision[14] = 0;
		if (checkBox16->Checked)
			binarycollision[15] = 1;
		else
			binarycollision[15] = 0;
		if (checkBox17->Checked)
			binarycollision[16] = 1;
		else
			binarycollision[16] = 0;
		if (checkBox18->Checked)
			binarycollision[17] = 1;
		else
			binarycollision[17] = 0;
		if (checkBox19->Checked)
			binarycollision[18] = 1;
		else
			binarycollision[18] = 0;
		if (checkBox20->Checked)
			binarycollision[19] = 1;
		else
			binarycollision[19] = 0;
		if (checkBox21->Checked)
			binarycollision[20] = 1;
		else
			binarycollision[20] = 0;
		if (checkBox22->Checked)
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
}


private: System::Void checkBox23_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox23->Checked)
	{
		label27->Visible = true;
		label28->Visible = true;
		label29->Visible = true;

		textBox23->Visible = true;
		textBox24->Visible = true;
		textBox25->Visible = true;
	}
	else if (checkBox23->Checked == false)
	{
		label27->Visible = false;
		label28->Visible = false;
		label29->Visible = false;

		textBox23->Visible = false;
		textBox24->Visible = false;
		textBox25->Visible = false;
	}
}


public: void refresh()
{

}




private: System::Void checkBox22_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox17_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox18_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox19_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox20_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
private: System::Void checkBox21_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	array<char>^ binarycollision = gcnew array<char>(22);
	unsigned int fullbinary = 0xFFC00000;

	if (checkBox1->Checked)
		binarycollision[0] = 1;
	else
		binarycollision[0] = 0;
	if (checkBox2->Checked)
		binarycollision[1] = 1;
	else
		binarycollision[1] = 0;
	if (checkBox3->Checked)
		binarycollision[2] = 1;
	else
		binarycollision[2] = 0;
	if (checkBox4->Checked)
		binarycollision[3] = 1;
	else
		binarycollision[3] = 0;
	if (checkBox5->Checked)
		binarycollision[4] = 1;
	else
		binarycollision[4] = 0;
	if (checkBox6->Checked)
		binarycollision[5] = 1;
	else
		binarycollision[5] = 0;
	if (checkBox7->Checked)
		binarycollision[6] = 1;
	else
		binarycollision[6] = 0;
	if (checkBox8->Checked)
		binarycollision[7] = 1;
	else
		binarycollision[7] = 0;
	if (checkBox9->Checked)
		binarycollision[8] = 1;
	else
		binarycollision[8] = 0;
	if (checkBox10->Checked)
		binarycollision[9] = 1;
	else
		binarycollision[9] = 0;
	if (checkBox11->Checked)
		binarycollision[10] = 1;
	else
		binarycollision[10] = 0;
	if (checkBox12->Checked)
		binarycollision[11] = 1;
	else
		binarycollision[11] = 0;
	if (checkBox13->Checked)
		binarycollision[12] = 1;
	else
		binarycollision[12] = 0;
	if (checkBox14->Checked)
		binarycollision[13] = 1;
	else
		binarycollision[13] = 0;
	if (checkBox15->Checked)
		binarycollision[14] = 1;
	else
		binarycollision[14] = 0;
	if (checkBox16->Checked)
		binarycollision[15] = 1;
	else
		binarycollision[15] = 0;
	if (checkBox17->Checked)
		binarycollision[16] = 1;
	else
		binarycollision[16] = 0;
	if (checkBox18->Checked)
		binarycollision[17] = 1;
	else
		binarycollision[17] = 0;
	if (checkBox19->Checked)
		binarycollision[18] = 1;
	else
		binarycollision[18] = 0;
	if (checkBox20->Checked)
		binarycollision[19] = 1;
	else
		binarycollision[19] = 0;
	if (checkBox21->Checked)
		binarycollision[20] = 1;
	else
		binarycollision[20] = 0;
	if (checkBox22->Checked)
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
};
}
