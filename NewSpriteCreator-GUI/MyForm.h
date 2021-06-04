#pragma once

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
	private: System::Windows::Forms::ToolStripMenuItem^ copyToClipboardToolStripMenuItem;
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




	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToClipboardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exampleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(353, 560);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(234, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(87, 163);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(234, 29);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(87, 247);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(234, 29);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(87, 331);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(234, 29);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(87, 415);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(234, 29);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(87, 79);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(234, 29);
			this->textBox5->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(82, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(82, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"ProfileID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(85, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"SpriteID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(82, 303);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Classname";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(82, 387);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"ArcNameList";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(363, 638);
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
			this->menuStrip1->Size = System::Drawing::Size(934, 38);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->saveAsToolStripMenuItem,
					this->copyToClipboardToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(62, 34);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(298, 40);
			this->saveAsToolStripMenuItem->Text = L"Save As...";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// copyToClipboardToolStripMenuItem
			// 
			this->copyToClipboardToolStripMenuItem->Name = L"copyToClipboardToolStripMenuItem";
			this->copyToClipboardToolStripMenuItem->Size = System::Drawing::Size(298, 40);
			this->copyToClipboardToolStripMenuItem->Text = L"Copy to Clipboard";
			this->copyToClipboardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::copyToClipboardToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exampleToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(74, 34);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// exampleToolStripMenuItem
			// 
			this->exampleToolStripMenuItem->Name = L"exampleToolStripMenuItem";
			this->exampleToolStripMenuItem->Size = System::Drawing::Size(209, 40);
			this->exampleToolStripMenuItem->Text = L"Example";
			this->exampleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exampleToolStripMenuItem_Click);
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
			this->label6->Location = System::Drawing::Point(493, 51);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 25);
			this->label6->TabIndex = 13;
			this->label6->Text = L"X-Offset";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(493, 135);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 25);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Y-Offset";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(498, 79);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(79, 29);
			this->textBox6->TabIndex = 16;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(498, 163);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(80, 29);
			this->textBox7->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(493, 219);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(198, 25);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Spawn Range (xDtC)";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(498, 247);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(80, 29);
			this->textBox8->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(493, 303);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(198, 25);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Spawn Range (yDtC)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(493, 387);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(196, 25);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Spawn Range (xDtE)";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(498, 331);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(80, 29);
			this->textBox9->TabIndex = 22;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(498, 415);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(80, 29);
			this->textBox10->TabIndex = 23;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(498, 499);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(79, 29);
			this->textBox11->TabIndex = 24;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(755, 79);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(79, 29);
			this->textBox12->TabIndex = 25;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(755, 163);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(79, 29);
			this->textBox13->TabIndex = 26;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(494, 471);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(196, 25);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Spawn Range (yDtE)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(750, 51);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 25);
			this->label13->TabIndex = 29;
			this->label13->Text = L"_1C";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(750, 135);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(47, 25);
			this->label14->TabIndex = 30;
			this->label14->Text = L"_1E";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(750, 219);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(45, 25);
			this->label15->TabIndex = 31;
			this->label15->Text = L"_20";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(750, 303);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 25);
			this->label16->TabIndex = 32;
			this->label16->Text = L"_22";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(755, 247);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(79, 29);
			this->textBox14->TabIndex = 33;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(755, 331);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(79, 29);
			this->textBox15->TabIndex = 34;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(750, 387);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(60, 25);
			this->label17->TabIndex = 35;
			this->label17->Text = L"Flags";
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::Window;
			this->textBox16->Location = System::Drawing::Point(755, 415);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(79, 29);
			this->textBox16->TabIndex = 36;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 721);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"NewSpriteCreator v0.2";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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

		String^ wholecode;
		wholecode = "dActor_c* " + classname + "::build() {\nvoid *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\nreturn new(buffer) " + classname + ";\n}\n\n" + "const SpriteData " + name + "SpriteData = \n{ ProfileId::" + profileid + ", " + xoffset + ", " + yoffset + ", " + xDtC + ", " + yDtC + ", " + xDtE + ", " + yDtE + ", " + _1C + ", " + _1E + ", " + _20 + ", " + _22 + ", " + flags + " };\n\n" + "Profile " + name + "Profile(&" + classname + "::build, SpriteId::" + spriteid + ", " + name + "SpriteData, ProfileId::" + profileid + ", ProfileId::" + profileid + ", \"" + name + "\", " + arcnamelistname + ");";
	
		System::Windows::Forms::Clipboard::SetText(wholecode);


		label7->Text = "Code copied to clipboard!";
	}
private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("NewSpriteCreator-GUI v0.2\n©LiQ 2021");
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

	String^ wholecode;
	wholecode = "dActor_c* " + classname + "::build() {\nvoid *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\nreturn new(buffer) " + classname + ";\n}\n\n" + "const SpriteData " + name + "SpriteData = \n{ ProfileId::" + profileid + ", " + xoffset + ", " + yoffset + ", " + xDtC + ", " + yDtC + ", " + xDtE + ", " + yDtE + ", " + _1C + ", " + _1E + ", " + _20 + ", " + _22 + ", " + flags + " };\n\n" + "Profile " + name + "Profile(&" + classname + "::build, SpriteId::" + spriteid + ", " + name + "SpriteData, ProfileId::" + profileid + ", ProfileId::" + profileid + ", \"" + name + "\", " + arcnamelistname + ");";


	SaveFileDialog^ sfd = gcnew SaveFileDialog();

	try
	{
		sfd->Filter = "Text Files|*.txt|All Files|*.*";
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
	String^ wholecode;
	wholecode = "dActor_c* " + classname + "::build() {\nvoid *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\nreturn new(buffer) " + classname + ";\n}\n\n" + "const SpriteData " + name + "SpriteData = \n{ ProfileId::" + profileid + ", " + xoffset + ", " + yoffset + ", " + xDtC + ", " + yDtC + ", " + xDtE + ", " + yDtE + ", " + _1C + ", " + _1E + ", " + _20 + ", " + _22 + ", " + flags + " };\n\n" + "Profile " + name + "Profile(&" + classname + "::build, SpriteId::" + spriteid + ", " + name + "SpriteData, ProfileId::" + profileid + ", ProfileId::" + profileid + ", \"" + name + "\", " + arcnamelistname + ");";

	System::Windows::Forms::Clipboard::SetText(wholecode);

}
private: System::Void exampleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox5->Text = "Sidestepper";
	textBox1->Text = "Sidestepper";
	textBox2->Text = "Sidestepper";
	textBox3->Text = "daSidestepper_c";
	textBox4->Text = "SidestepperArcNameList";
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


}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
