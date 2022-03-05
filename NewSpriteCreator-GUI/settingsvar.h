#pragma once

namespace NewSpriteCreatorGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für settingsvar
	/// </summary>
	public ref class settingsvar : public System::Windows::Forms::Form
	{
	public:
		settingsvar(void)
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
		~settingsvar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(settingsvar::typeid));
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(161, 63);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 48, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 17, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(73, 32);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 17, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(276, 63);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 48, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 17, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(73, 32);
			this->numericUpDown2->TabIndex = 1;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 17, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ReggieBit";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(240, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 26);
			this->label2->TabIndex = 3;
			this->label2->Text = L"to";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(137, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(206, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"SpriteDataCreator";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(170, 117);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 53);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Create!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &settingsvar::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 176);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(373, 26);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &settingsvar::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(396, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Copy";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &settingsvar::button2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(338, 115);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(104, 24);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"ReggieBit";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &settingsvar::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(338, 145);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(133, 24);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->Text = L"ReggieNybble";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &settingsvar::radioButton2_CheckedChanged);
			// 
			// settingsvar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(477, 214);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"settingsvar";
			this->Text = L"SpriteDataCreator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void nybbles(ArrayList^ settingsarr)
	{
		if (Convert::ToInt32(numericUpDown1->Value) == Convert::ToInt32(numericUpDown2->Value))
		{
			if (Convert::ToInt32(numericUpDown2->Value) == 12)
			{
				textBox1->Text = "settings" + " & 0xF";
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 11)
			{
				textBox1->Text = "settings >> 4" + " & 0xF";
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 10)
			{
				textBox1->Text = "settings >> 8" + " & 0xF";
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 9)
			{
				textBox1->Text = "settings >> 12" + " & 0xF";
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 8)
			{
				textBox1->Text = "settings >> 16" + " & 0xF";
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 7)
			{
				textBox1->Text = "settings >> 20" + " & 0xF";
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 6)
			{
				textBox1->Text = "settings >> 24" + " & 0xF";
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 5)
			{
				textBox1->Text = "settings >> 28" + " & 0xF";
			}

		}
		else if (Convert::ToInt32(numericUpDown1->Value) > Convert::ToInt32(numericUpDown2->Value))
		{
			textBox1->Text = "ERROR: Value 2 > Value 1";
		}
		else
		{
			String^ fafter0x = "0x";
			int val1 = Convert::ToInt32(numericUpDown1->Value);
			int val2 = Convert::ToInt32(numericUpDown2->Value);
			for (; val1 != val2; val1++)
			{
				fafter0x = fafter0x + "F";
			}
			fafter0x = fafter0x + "F";

			if (Convert::ToInt32(numericUpDown2->Value) == 12)
			{
				textBox1->Text = "settings & " + fafter0x;
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 11)
			{
				textBox1->Text = "settings >> 4 & " + fafter0x;
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 10)
			{
				textBox1->Text = "settings >> 8 & " + fafter0x;
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 9)
			{
				textBox1->Text = "settings >> 12 & " + fafter0x;
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 8)
			{
				textBox1->Text = "settings >> 16 & " + fafter0x;
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 7)
			{
				textBox1->Text = "settings >> 20 & " + fafter0x;
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 6)
			{
				textBox1->Text = "settings >> 24 & " + fafter0x;
			}
			else if (Convert::ToInt32(numericUpDown2->Value) == 5)
			{
				textBox1->Text = "settings >> 28 & " + fafter0x;
			}
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ArrayList^ settingsarr = gcnew ArrayList();
		//ArrayList^ eventarr = gcnew ArrayList();

		int counterforsettingsarr = 31;
		for (int i = 0; i < 32; i++)
		{
			//textBox1->Text = textBox1->Text + ", " + counterforsettingsarr.ToString();
			settingsarr->Add(counterforsettingsarr.ToString());
			counterforsettingsarr--;
		}
		
		if (radioButton2->Checked)
		{
			nybbles(settingsarr);
			return;
		}

		if (Convert::ToInt32(numericUpDown1->Value) == Convert::ToInt32(numericUpDown2->Value))
		{
			if (Convert::ToInt32(numericUpDown2->Value) == 48)
			{
				textBox1->Text = "settings" + " & 1";
			}
			else
				textBox1->Text = "settings >> " + settingsarr[Convert::ToInt32(numericUpDown1->Value) - 17] + " & 1";
		}
		else if (Convert::ToInt32(numericUpDown1->Value) > Convert::ToInt32(numericUpDown2->Value))
		{
			textBox1->Text = "ERROR: Value 2 > Value 1";
		}
		else
		{
			String^ onesafter0b = "";
			int val1 = Convert::ToInt32(numericUpDown1->Value);
			int val2 = Convert::ToInt32(numericUpDown2->Value);
			for (; val1 != val2; val1++)
			{
				onesafter0b = onesafter0b + "1";
			}
			onesafter0b = onesafter0b + "1";

			if (onesafter0b->Length == 4)
			{
				if (Convert::ToInt32(numericUpDown2->Value) == 48)
				{
					textBox1->Text = "settings" + " & 0xF";
				}
				else
					textBox1->Text = "settings >> " + settingsarr[Convert::ToInt32(numericUpDown2->Value) - 17] + " & 0xF";
			}
			else if (onesafter0b->Length == 8)
			{
				if (Convert::ToInt32(numericUpDown2->Value) == 48)
				{
					textBox1->Text = "settings" + " & 0xFF";
				}
				else
					textBox1->Text = "settings >> " + settingsarr[Convert::ToInt32(numericUpDown2->Value) - 17] + " & 0xFF";
			}
			else if (onesafter0b->Length == 12)
			{
				if (Convert::ToInt32(numericUpDown2->Value) == 48)
				{
					textBox1->Text = "settings" + " & 0xFFF";
				}
				else
					textBox1->Text = "settings >> " + settingsarr[Convert::ToInt32(numericUpDown2->Value) - 17] + " & 0xFFF";
			}
			else if (onesafter0b->Length == 16)
			{
				if (Convert::ToInt32(numericUpDown2->Value) == 48)
				{
					textBox1->Text = "settings" + " & 0xFFFF";
				}
				else
					textBox1->Text = "settings >> " + settingsarr[Convert::ToInt32(numericUpDown2->Value) - 17] + " & 0xFFFF";
			}
			else if (onesafter0b->Length == 20)
			{
				if (Convert::ToInt32(numericUpDown2->Value) == 48)
				{
					textBox1->Text = "settings" + " & 0xFFFFF";
				}
				else
					textBox1->Text = "settings >> " + settingsarr[Convert::ToInt32(numericUpDown2->Value) - 17] + " & 0xFFFFF";
			}
			else if (onesafter0b->Length == 24)
			{
				if (Convert::ToInt32(numericUpDown2->Value) == 48)
				{
					textBox1->Text = "settings" + " & 0xFFFFFF";
				}
				else
					textBox1->Text = "settings >> " + settingsarr[Convert::ToInt32(numericUpDown2->Value) - 17] + " & 0xFFFFFF";
			}
			else if (onesafter0b->Length == 28)
			{
				if (Convert::ToInt32(numericUpDown2->Value) == 48)
				{
					textBox1->Text = "settings" + " & 0xFFFFFFF";
				}
				else
					textBox1->Text = "settings >> " + settingsarr[Convert::ToInt32(numericUpDown2->Value) - 17] + " & 0xFFFFFFF";
			}
			else if (onesafter0b->Length == 32)
			{
				if (Convert::ToInt32(numericUpDown2->Value) == 48)
				{
					textBox1->Text = "settings" + " & 0xFFFFFFFF";
				}
				else
					textBox1->Text = "settings >> " + settingsarr[Convert::ToInt32(numericUpDown2->Value) - 17] + " & 0xFFFFFFFF";
			}
				
				
			else
			{
				textBox1->Text = "settings >> " + settingsarr[Convert::ToInt32(numericUpDown2->Value) - 17] + " & 0b" + onesafter0b;
			}
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Clipboard::SetText(textBox1->Text);
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked)
	{
		label1->Text = "ReggieBit";
		numericUpDown1->Minimum = 17;
		numericUpDown1->Maximum = 48;
		numericUpDown2->Minimum = 17;
		numericUpDown2->Maximum = 48;
	}
	else
	{
		label1->Text = "ReggieNybble";
		numericUpDown1->Minimum = 5;
		numericUpDown1->Maximum = 12;
		numericUpDown2->Minimum = 5;
		numericUpDown2->Maximum = 12;
	}
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	radioButton1_CheckedChanged(sender, e);
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox1->Text == "ERROR: Value 2 > Value 1")
	{
		button2->Enabled = false;
	}
	else
	{
		button2->Enabled = true;
	}
}
};
}
