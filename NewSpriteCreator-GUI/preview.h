#pragma once

namespace NewSpriteCreatorGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für preview
	/// </summary>
	public ref class preview : public System::Windows::Forms::Form
	{
	public:
		preview(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	public:
		static String^ code = "";

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~preview()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(preview::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(1448, 741);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->WordWrap = false;
			// 
			// preview
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1448, 741);
			this->Controls->Add(this->richTextBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"preview";
			this->Text = L"Code Preview";
			this->Load += gcnew System::EventHandler(this, &preview::preview_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void preview_Load(System::Object^ sender, System::EventArgs^ e) {
		
		String^ fontName = "Cascadia Code";
		float fontSize = 11;

		System::Drawing::Font^ fontTester = gcnew System::Drawing::Font(
		fontName,
		fontSize,
		FontStyle::Regular);
		
		if (fontTester->Name == fontName)
		{
			richTextBox1->Font = gcnew System::Drawing::Font("Cascadia Code", 11, FontStyle::Regular);
		}
		else
		{
			richTextBox1->Font = gcnew System::Drawing::Font("Consolas", 11, FontStyle::Regular);
		}
		
		richTextBox1->Text = code;
	}
	};
}
