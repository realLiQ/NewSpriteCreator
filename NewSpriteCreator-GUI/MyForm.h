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
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(167, 477);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(234, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(167, 164);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(234, 29);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(167, 248);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(234, 29);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(167, 332);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(234, 29);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(167, 416);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(234, 29);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(167, 80);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(234, 29);
			this->textBox5->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(162, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(162, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"ProfileID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(165, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"SpriteID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(162, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Classname";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(162, 388);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"ArcNameList";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(174, 555);
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
			this->menuStrip1->Size = System::Drawing::Size(566, 38);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 611);
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
			this->Text = L"NewSpriteCreator v0.1";
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

		String^ wholecode;
		wholecode = "dActor_c* " + classname + "::build() {\nvoid *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\nreturn new(buffer) " + classname + ";\n}\n\n" + "const SpriteData " + name + "SpriteData = \n{ ProfileId::" + profileid + ", 0, 0 , 0 , 0, 0x100, 0x100, 0, 0, 0, 0, 0 };\n\n" + "Profile " + name + "Profile(&" + classname + "::build, SpriteId::" + spriteid + ", " + name + "SpriteData, ProfileId::" + profileid + ", ProfileId::" + profileid + ", \"" + name + "\", " + arcnamelistname + ");";
	
		System::Windows::Forms::Clipboard::SetText(wholecode);


		label7->Text = "Code copied to clipboard!";
	}
private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("NewSpriteCreator-GUI v0.1\n©LiQ 2021");
}

private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ path;

	String^ name = textBox5->Text;
	String^ profileid = textBox1->Text;
	String^ spriteid = textBox2->Text;
	String^ classname = textBox3->Text;
	String^ arcnamelistname = textBox4->Text;

	String^ wholecode;
	wholecode = "dActor_c* " + classname + "::build() {\nvoid *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\nreturn new(buffer) " + classname + ";\n}\n\n" + "const SpriteData " + name + "SpriteData = \n{ ProfileId::" + profileid + ", 0, 0 , 0 , 0, 0x100, 0x100, 0, 0, 0, 0, 0 };\n\n" + "Profile " + name + "Profile(&" + classname + "::build, SpriteId::" + spriteid + ", " + name + "SpriteData, ProfileId::" + profileid + ", ProfileId::" + profileid + ", \"" + name + "\", " + arcnamelistname + ");";


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
		}
	}
	finally
	{
		delete sfd;
	}
	//MessageBox::Show( sfd->FileName );
	MessageBox::Show("File saved successfully!");

}

private: System::Void copyToClipboardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ name = textBox5->Text;
	String^ profileid = textBox1->Text;
	String^ spriteid = textBox2->Text;
	String^ classname = textBox3->Text;
	String^ arcnamelistname = textBox4->Text;
	String^ wholecode;
	wholecode = "dActor_c* " + classname + "::build() {\nvoid *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\nreturn new(buffer) " + classname + ";\n}\n\n" + "const SpriteData " + name + "SpriteData = \n{ ProfileId::" + profileid + ", 0, 0 , 0 , 0, 0x100, 0x100, 0, 0, 0, 0, 0 };\n\n" + "Profile " + name + "Profile(&" + classname + "::build, SpriteId::" + spriteid + ", " + name + "SpriteData, ProfileId::" + profileid + ", ProfileId::" + profileid + ", \"" + name + "\", " + arcnamelistname + ");";

	System::Windows::Forms::Clipboard::SetText(wholecode);

}
private: System::Void exampleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox5->Text = "Sidestepper";
	textBox1->Text = "Sidestepper";
	textBox2->Text = "Sidestepper";
	textBox3->Text = "daSidestepper_c";
	textBox4->Text = "SidestepperArcNameList";


}
};
}
