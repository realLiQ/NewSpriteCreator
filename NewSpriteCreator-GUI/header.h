#pragma once

namespace NewSpriteCreatorGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für header
	/// </summary>
	public ref class header : public System::Windows::Forms::Form
	{
	public:
		header(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
		static Collections::ArrayList^ headerarr = gcnew Collections::ArrayList();

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~header()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ renameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removeToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(header::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->renameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 26;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(273, 368);
			this->listBox1->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addToolStripMenuItem,
					this->renameToolStripMenuItem, this->removeToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(149, 100);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &header::contextMenuStrip1_Opening);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(148, 32);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &header::addToolStripMenuItem_Click);
			// 
			// renameToolStripMenuItem
			// 
			this->renameToolStripMenuItem->Name = L"renameToolStripMenuItem";
			this->renameToolStripMenuItem->Size = System::Drawing::Size(148, 32);
			this->renameToolStripMenuItem->Text = L"Rename";
			this->renameToolStripMenuItem->Click += gcnew System::EventHandler(this, &header::renameToolStripMenuItem_Click);
			// 
			// removeToolStripMenuItem
			// 
			this->removeToolStripMenuItem->Name = L"removeToolStripMenuItem";
			this->removeToolStripMenuItem->Size = System::Drawing::Size(148, 32);
			this->removeToolStripMenuItem->Text = L"Remove";
			this->removeToolStripMenuItem->Click += gcnew System::EventHandler(this, &header::removeToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(105, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &header::button1_Click);
			// 
			// header
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(297, 451);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"header";
			this->Text = L"Custom Header";
			this->Load += gcnew System::EventHandler(this, &header::header_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ x = (listBox1->Items->Count + 1).ToString();
		listBox1->Items->Add("Header" + x + ".h");
	}
private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	if (listBox1->SelectedIndex == -1)
	{
		renameToolStripMenuItem->Enabled = false;
		removeToolStripMenuItem->Enabled = false;
	}
	else
	{
		renameToolStripMenuItem->Enabled = true;
		removeToolStripMenuItem->Enabled = true;
	}
}
private: System::Void renameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex != -1)
	{
		String^ content = Microsoft::VisualBasic::Interaction::InputBox("Enter a new name.", "Rename", listBox1->Items[listBox1->SelectedIndex]->ToString(), 500, 300);
		if (content == "") { return; }
		if (!content->EndsWith(".h"))
		{
			content = content + ".h";
		}
		listBox1->Items[listBox1->SelectedIndex] = content;
	}
}
private: System::Void removeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex != -1)
	{
		listBox1->Items->RemoveAt(listBox1->SelectedIndex);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	headerarr->Clear();
	for (int timer = 0; timer < listBox1->Items->Count; timer++)
	{
		headerarr->Add(listBox1->Items[timer]->ToString());
	}


	this->Close();
}
private: System::Void header_Load(System::Object^ sender, System::EventArgs^ e) {
	if (headerarr->Count > 0)
	{
		listBox1->Items->Clear();
		for (int i = 0; i < headerarr->Count; i++)
		{
			listBox1->Items->Add(headerarr[i]);
		}
	}
}
};
}
