#pragma once
#include <exception>

namespace vcc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			timer1->Start();

			currencycomboBox->Text = "Choose Currency"; 
			secondcurrencycomboBox->Text = "Choose Currency";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ dateLabel;
	protected:

	private: System::Windows::Forms::Label^ timeLabel;
	protected:

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ComboBox^ currencycomboBox;
	private: System::Windows::Forms::TextBox^ value1text;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ secondcurrencycomboBox;
	private: System::Windows::Forms::TextBox^ value2text;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->currencycomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->value1text = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->secondcurrencycomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->value2text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateLabel->Location = System::Drawing::Point(24, 294);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(38, 15);
			this->dateLabel->TabIndex = 0;
			this->dateLabel->Text = L"label1";
			// 
			// timeLabel
			// 
			this->timeLabel->AutoSize = true;
			this->timeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeLabel->Location = System::Drawing::Point(472, 294);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(38, 15);
			this->timeLabel->TabIndex = 1;
			this->timeLabel->Text = L"label2";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// currencycomboBox
			// 
			this->currencycomboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->currencycomboBox->FormattingEnabled = true;
			this->currencycomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"USD", L"GHC", L"Pound Sterling", L"Japanese Yen",
					L"Australian Dollar", L"Canadian Dollar"
			});
			this->currencycomboBox->Location = System::Drawing::Point(267, 99);
			this->currencycomboBox->Name = L"currencycomboBox";
			this->currencycomboBox->Size = System::Drawing::Size(141, 21);
			this->currencycomboBox->TabIndex = 2;
			// 
			// value1text
			// 
			this->value1text->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->value1text->Location = System::Drawing::Point(107, 99);
			this->value1text->Name = L"value1text";
			this->value1text->Size = System::Drawing::Size(135, 20);
			this->value1text->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(243, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Convert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(333, 216);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// secondcurrencycomboBox
			// 
			this->secondcurrencycomboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->secondcurrencycomboBox->FormattingEnabled = true;
			this->secondcurrencycomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"USD", L"GHC", L"Pound Sterling",
					L"Japanese Yen", L"Australian Dollar", L"Canadian Dollar"
			});
			this->secondcurrencycomboBox->Location = System::Drawing::Point(267, 139);
			this->secondcurrencycomboBox->Name = L"secondcurrencycomboBox";
			this->secondcurrencycomboBox->Size = System::Drawing::Size(141, 21);
			this->secondcurrencycomboBox->TabIndex = 7;
			// 
			// value2text
			// 
			this->value2text->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->value2text->Location = System::Drawing::Point(107, 140);
			this->value2text->Name = L"value2text";
			this->value2text->ReadOnly = true;
			this->value2text->Size = System::Drawing::Size(135, 20);
			this->value2text->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 15);
			this->label1->TabIndex = 9;
			this->label1->Text = L"From";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 15);
			this->label2->TabIndex = 10;
			this->label2->Text = L"To";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(183, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 21);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Currency Converter";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 338);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->value2text);
			this->Controls->Add(this->secondcurrencycomboBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->value1text);
			this->Controls->Add(this->currencycomboBox);
			this->Controls->Add(this->timeLabel);
			this->Controls->Add(this->dateLabel);
			this->Name = L"MyForm";
			this->Text = L"Currency Converter";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double
			// US Dollars <> Ghana Cedis
			GHC_USD,
			USD_GHC,
			// Pound Sterling <> Ghana Cedis
			GHC_PDS,
			PDS_GHC,
			// US Dollars <> Pound Sterling
			USD_PDS,
			PDS_USD,
			//Japannese Yen <> Ghana Cedis
			JPY_GHC,
			GHC_JPY,
			//Pound Sterlings <> Japanese Yen
			PDS_JPY,
			JPY_PDS,
			// US Dollars <> Japanese Yen
			USD_JPY,
			JPY_USD,
			// Australian Dollar <> Ghana Cedis
			AUD_GHC,
			GHC_AUD,
			// Australian Dollar <> US Dollar
			AUD_USD,
			USD_AUD,
			// Australian Dollar <> Pound Sherling
			AUD_PDS,
			PDS_AUD,
			// Australian Dollar <> Japanese Yen
			AUD_JPY,
			JPY_AUD,

			// Canadian Dollar <> Ghana Cedis
			CND_GHC,
			GHC_CND,

			// Canadian Dollar <> US Dollar
			CND_USD,
			USD_CND,

			// Canadian Dollar <> Pound Sterling
			CND_PDS,
			PDS_CND,

			// Canadian Dollar <> Japanese Yen
			CND_JPY,
			JPY_CND,

			// Canadian Dollar <> Australian Dollar
			CND_AUD,
			AUD_CND

			;

	
		// US Dollar <> Ghana Cedis
		void usDollor_ghCedis() {
			/*try
			{*/
				double USD = Convert::ToDouble(value1text->Text);
				if (currencycomboBox->Text == "USD" && secondcurrencycomboBox->Text == "GHC")
				{
					value2text->Text = "GH¢ " + System::Convert::ToString(USD * USD_GHC);
				}
			//}
			//catch (Exception^ex)
			//{
			//	MessageBox::Show(ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			//	/*return;*/
			//}
			
						
		}
		void ghCedis_usDollor() {
			
				double GHC = Convert::ToDouble(value1text->Text);

				if (currencycomboBox->Text == "GHC" && secondcurrencycomboBox->Text == "USD")
				{
					value2text->Text = "$ " + System::Convert::ToString(GHC * GHC_USD);
				}
			/*}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}*/
		}

		// US Dollar <> Pound Sterlings
		void usDollor_poundSterling() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "USD" && secondcurrencycomboBox->Text == "Pound Sterling")
			{
				value2text->Text = "£ " + System::Convert::ToString(USD * USD_PDS);
			}
		}
		void poundSterling_usDollor() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Pound Sterling" && secondcurrencycomboBox->Text == "USD")
			{
				value2text->Text = "$ " + System::Convert::ToString(USD * PDS_USD);
			}
		}

		// Japannese Yen <> Ghana Cedis
		void japanYen_ghCedis() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Japanese Yen" && secondcurrencycomboBox->Text == "GHC")
			{
				value2text->Text = "GH¢ " + System::Convert::ToString(USD * JPY_GHC);
			}
		}
		void ghCedis_japanYen() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "GHC" && secondcurrencycomboBox->Text == "Japanese Yen")
			{
				value2text->Text = "¥ " + System::Convert::ToString(USD * GHC_JPY);
			}
		}

		// Pound Sterling <> Ghana Cedis
		void poundSterling_ghCedis() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Pound Sterling" && secondcurrencycomboBox->Text == "GHC")
			{
				value2text->Text = "GH¢" + System::Convert::ToString(USD * PDS_GHC);
			}
		}
		void ghCedis_poundSterling() {
			double GHC = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "GHC" && secondcurrencycomboBox->Text == "Pound Sterling")
			{
				value2text->Text = "£ " + System::Convert::ToString(GHC * GHC_PDS);
			}
		}

		// Australian Dollar <> Ghana Cedis
		void ausDollar_ghCedis() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Australian Dollar" && secondcurrencycomboBox->Text == "GHC")
			{
				value2text->Text = "GH¢" + System::Convert::ToString(USD * AUD_GHC);
			}
		}
		void ghCedis_ausDollar() {
			double GHC = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "GHC" && secondcurrencycomboBox->Text == "Australian Dollar")
			{
				value2text->Text = "A$ " + System::Convert::ToString(GHC * GHC_AUD);
			}
		}

		// Australian Dollar <> US Dollar
		void ausDollar_usDollar() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Australian Dollar" && secondcurrencycomboBox->Text == "USD")
			{
				value2text->Text = "$ " + System::Convert::ToString(USD * AUD_USD);
			}
		}
		void usDollar_ausDollar() {
			double GHC = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "USD" && secondcurrencycomboBox->Text == "Australian Dollar")
			{
				value2text->Text = "A$ " + System::Convert::ToString(GHC * USD_AUD);
			}
		}

		// Pound Sterling <> Japanese Yen
		void poundSterling_japanYen() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Pound Sterling" && secondcurrencycomboBox->Text == "Japanese Yen")
			{
				value2text->Text = "¥ " + System::Convert::ToString(USD * PDS_JPY);
			}
		}
		void japanYen_poundSterling() {
			double GHC = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Japanese Yen" && secondcurrencycomboBox->Text == "Pound Sterling")
			{
				value2text->Text = "£ " + System::Convert::ToString(GHC * JPY_PDS);
			}
		}
	
		// Australian Dollar  <> Pound Sterling
		void poundSterling_ausDollar() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Pound Sterling" && secondcurrencycomboBox->Text == "Australian Dollar")
			{
				value2text->Text = "A$ " + System::Convert::ToString(USD * PDS_AUD);
			}
		}
		void ausDollar_poundSterling() {
			double GHC = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Australian Dollar" && secondcurrencycomboBox->Text == "Pound Sterling")
			{
				value2text->Text = "£ " + System::Convert::ToString(GHC * AUD_PDS);
			}
		}

		// Australian Dollar <> Japanese Yen
		void ausDollar_japanYen() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Australian Dollar" && secondcurrencycomboBox->Text == "Japanese Yen")
			{
				value2text->Text = "¥ " + System::Convert::ToString(USD * AUD_JPY);
			}
		}
		void japanYen_ausDollar() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Japanese Yen" && secondcurrencycomboBox->Text == "Australian Dollar")
			{
				value2text->Text = "A$ " + System::Convert::ToString(USD * JPY_AUD);
			}
		}

		// US Dolars <> Japanese Yen
		void usDollar_japanYen() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "USD" && secondcurrencycomboBox->Text == "Japanese Yen")
			{
				value2text->Text = "¥ " + System::Convert::ToString(USD * USD_JPY);
			}
		}
		void japanYen_usDollar() {
			double GHC = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Japanese Yen" && secondcurrencycomboBox->Text == "USD")
			{
				value2text->Text = "$ " + System::Convert::ToString(GHC * JPY_USD);
			}
		}

		// Canadian Dollar <> Japanese Yen
		void cnDollar_japanYen() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Canadian Dollar" && secondcurrencycomboBox->Text == "Japanese Yen")
			{
				value2text->Text = "¥ " + System::Convert::ToString(USD * CND_JPY);
			}
		}
		void japanYen_cnDollar() {
			double GHC = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Japanese Yen" && secondcurrencycomboBox->Text == "Canadian Dollar")
			{
				value2text->Text = "C$ " + System::Convert::ToString(GHC * JPY_CND);
			}
		}

		// Canadian Dollar <> Australian Dollar
		void cnDollar_ausDollar() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Canadian Dollar" && secondcurrencycomboBox->Text == "Australian Dollar")
			{
				value2text->Text = "A$ " + System::Convert::ToString(USD * CND_AUD);
			}
		}
		void ausDollar_cnDollar() {
			double GHC = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Australian Dollar" && secondcurrencycomboBox->Text == "Canadian Dollar")
			{
				value2text->Text = "C$ " + System::Convert::ToString(GHC * AUD_CND);
			}
		}

		// Canadian Dollar <> US Dollar
		void cnDollar_usDollar() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Canadian Dollar" && secondcurrencycomboBox->Text == "USD")
			{
				value2text->Text = "$ " + System::Convert::ToString(USD * CND_USD);
			}
		}
		void usDollar_cnDollar() {
			double GHC = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "USD" && secondcurrencycomboBox->Text == "Canadian Dollar")
			{
				value2text->Text = "C$ " + System::Convert::ToString(GHC * USD_CND);
			}
		}

		// Canadian Dollar <> Pound Sterling
		void cnDollar_poundSterling() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Canadian Dollar" && secondcurrencycomboBox->Text == "Pound sterling")
			{
				value2text->Text = "£ " + System::Convert::ToString(USD * CND_PDS);
			}
		}
		void poundSterling_cnDollar() {
			double GHC = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Pound Sterling" && secondcurrencycomboBox->Text == "Canadian Dollar")
			{
				value2text->Text = "C$ " + System::Convert::ToString(GHC * PDS_CND);
			}
		}

		// Canadian Dollar <> Ghana Cedis
		void cnDollar_ghCedis() {
			double USD = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "Canadian Dollar" && secondcurrencycomboBox->Text == "GHC")
			{
				value2text->Text = "GH¢ " + System::Convert::ToString(USD * CND_GHC);
			}
		}
		void ghCedis_cnDollar() {
			double GHC = Convert::ToDouble(value1text->Text);

			if (currencycomboBox->Text == "GHC" && secondcurrencycomboBox->Text == "Canadian Dollar")
			{
				value2text->Text = "C$ " + System::Convert::ToString(GHC * GHC_CND);
			}
		}

		// Error Checking
		void errorCheck() {
			if (currencycomboBox->Text == "Choose Currency" && secondcurrencycomboBox->Text == "Choose Currency")
			{
				
				MessageBox::Show("Choose Currency fields required", "Alert", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
			else
			{
				if (currencycomboBox->Text == "Choose Currency" && secondcurrencycomboBox->Text || currencycomboBox->Text && secondcurrencycomboBox->Text == "Choose Currency")
				{

					MessageBox::Show("Select Other Currency", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				else
				{
					if (currencycomboBox->Text == secondcurrencycomboBox->Text)
					{
						MessageBox::Show("Choose Different Currencies to Convert", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);

					}
				}
				
			}
			/*if (value1text->Text == "")
			{
				MessageBox::Show("From Field required", "Alert", MessageBoxButtons::OK);
				this->value1text->BackColor = System::Drawing::SystemColors::HotTrack;

				// Check Input to accept only numbers
				if (value1text->Text + 0 != value1text->Text)
				{
					MessageBox::Show("Enter Numbers Only", "Alert", MessageBoxButtons::AbortRetryIgnore);
				}

				if (currencycomboBox->Text == "Choose Currency" && secondcurrencycomboBox->Text == "Choose Currency")
				{
					MessageBox::Show("Choose Currency fields required", "Alert", MessageBoxButtons::OK);
				}

			}*/
		}
		


		// Reset
		void reset() {
			currencycomboBox->Text = "Choose Currency";
			secondcurrencycomboBox->Text = "Choose Currency";
			value1text->Text = "";
			value2text->Text = "";
			/*value2text->ReadOnly = false;*/
		}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		DateTime datetime = DateTime::Now;
		this->timeLabel->Text = datetime.ToLongTimeString();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		DateTime iDate = DateTime::Now;
		dateLabel->Text = iDate.ToLongDateString();
	}
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	GHC_USD = 0.14;
	USD_GHC = 7.28;
	GHC_PDS = 0.11;
	PDS_GHC = 9.43;
	USD_PDS = 0.76;
	PDS_USD = 1.32;
	JPY_GHC = 0.060;
	GHC_JPY = 16.54;
	PDS_JPY = 156.22;
	JPY_PDS = 0.0064;
	JPY_USD = 0.0084;
	USD_JPY = 118.73;
	AUD_GHC = 5.30;
	GHC_AUD = 0.19;
	AUD_USD = 0.74;
	USD_AUD = 1.35;
	AUD_PDS = 0.56;
	PDS_AUD = 1.78;
	AUD_JPY = 87.68;
	JPY_AUD = 0.011;
	CND_JPY = 94.50;
	JPY_CND = 0.011;
	AUD_CND = 0.93;
	CND_AUD = 1.07;
	CND_USD = 0.79;
	USD_CND = 1.26;
	CND_PDS = 0.60;
	PDS_CND = 1.66;
	CND_GHC = 5.76;
	GHC_CND = 0.17;

	

	// Empty Input Check
	errorCheck();
 
	
	try
	{
		// US Dollars <> Ghana Cedis
		usDollor_ghCedis();
		ghCedis_usDollor();
		// Pound Sterling <> Ghana Cedis
		poundSterling_ghCedis();
		ghCedis_poundSterling();

		// US Dollars <> Pound Sterlings
		usDollor_poundSterling();
		poundSterling_usDollor();

		// Pound Sterling <> Japanese Yen
		poundSterling_japanYen();
		japanYen_poundSterling();

		// US Dollar <> Japanese Yen
		usDollar_japanYen();
		japanYen_usDollar();

		// Japanese Yen <> Ghana Cedis
		japanYen_ghCedis();
		ghCedis_japanYen();

		// Autralian Dollar <> Ghana Cedis
		ausDollar_ghCedis();
		ghCedis_ausDollar();

		// Autralian Dollar <> Ghana Cedis
		ausDollar_usDollar();
		usDollar_ausDollar();

		// Australian Dollar <> Pound Sterling
		poundSterling_ausDollar();
		ausDollar_poundSterling();

		// Australian Dollar <> Japanese Yen
		ausDollar_japanYen();
		japanYen_ausDollar();

		// Canadian Dollar <> Japanese Yen
		cnDollar_japanYen();
		japanYen_cnDollar();

		// Canadian Dollar <> Australian Dollar
		cnDollar_ausDollar();
		ausDollar_cnDollar();

		// Canadian Dollar <> US Dollar
		cnDollar_usDollar();
		usDollar_cnDollar();

		// Canadian Dollar <> Pound Sterling
		cnDollar_poundSterling();
		poundSterling_cnDollar();

		// Canadian Dollar <> Ghana Cedis
		cnDollar_ghCedis();
		ghCedis_cnDollar();

	}
	catch (Exception^ex)
	{
		if (value1text->Text == "")
		{
			MessageBox::Show("From field required", "Alert!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			if (value1text->Text == Convert::ToString(value1text->Text))
			{
				MessageBox::Show("Invalid Input \n Enter numbers only", "Alert!", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			}
		}
		

		
	}
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	reset();
}
};
}
