#pragma once
#include "version.h"
#include <cliext/list>

namespace NewSpriteCreatorGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Zusammenfassung für states
	/// </summary>
	public ref class states : public System::Windows::Forms::Form
	{
	public:
		states(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
		static Collections::ArrayList^ statesarr = gcnew Collections::ArrayList();

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~states()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ renameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removeToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(states::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->renameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->listBox1->ItemHeight = 26;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(273, 368);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &states::listBox1_SelectedIndexChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addToolStripMenuItem,
					this->renameToolStripMenuItem, this->removeToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(192, 100);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &states::contextMenuStrip1_Opening);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(191, 32);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &states::addToolStripMenuItem_Click);
			// 
			// renameToolStripMenuItem
			// 
			this->renameToolStripMenuItem->Name = L"renameToolStripMenuItem";
			this->renameToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F2;
			this->renameToolStripMenuItem->Size = System::Drawing::Size(191, 32);
			this->renameToolStripMenuItem->Text = L"Rename";
			this->renameToolStripMenuItem->Click += gcnew System::EventHandler(this, &states::renameToolStripMenuItem_Click);
			// 
			// removeToolStripMenuItem
			// 
			this->removeToolStripMenuItem->Name = L"removeToolStripMenuItem";
			this->removeToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->removeToolStripMenuItem->Size = System::Drawing::Size(191, 32);
			this->removeToolStripMenuItem->Text = L"Remove";
			this->removeToolStripMenuItem->Click += gcnew System::EventHandler(this, &states::removeToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(105, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &states::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(310, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &states::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(310, 58);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Remove";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &states::button3_Click);
			// 
			// states
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(297, 451);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"states";
			this->Text = L"State Editor";
			this->Load += gcnew System::EventHandler(this, &states::states_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		statesarr->Clear();
		for (int timer = 0; timer < listBox1->Items->Count; timer++)
		{
			statesarr->Add(listBox1->Items[timer]->ToString());
		}
		

		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//Remove button
		if (listBox1->SelectedIndex != -1)
		{
			listBox1->Items->RemoveAt(listBox1->SelectedIndex);
		}
		else
		{

		}
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex != -1)
	{
		button3->Enabled = true;
	}
	else
	{
		button3->Enabled = false;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Add button
	String^ x = (listBox1->Items->Count + 1).ToString();
	listBox1->Items->Add("State" + x);
}
private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button2_Click(sender, e);
	return;
}
private: System::Void removeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button3_Click(sender, e);
	return;
}
private: System::Void renameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex != -1)
	{
		String^ content = Microsoft::VisualBasic::Interaction::InputBox("Enter a new name.", "Rename", listBox1->Items[listBox1->SelectedIndex]->ToString(), 500, 300);
		if (content == "") { return; }
		listBox1->Items[listBox1->SelectedIndex] = content;
	}
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
private: System::Void states_Load(System::Object^ sender, System::EventArgs^ e) {
	if (statesarr->Count > 0)
	{
		listBox1->Items->Clear();
		for (int i = 0; i < statesarr->Count; i++)
		{
			listBox1->Items->Add(statesarr[i]);
		}
	}
}
};
}
