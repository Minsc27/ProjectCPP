#pragma once
#include <exception>
#include "Strategy.h"
#include "GestionClients.h"
#include "GestionCommandes.h"
#include "GestionPersonnel.h"
#include "GestionStock.h"
#include "GestionStatistiques.h"

namespace ProjectCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		Strategy^ strategy_;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 114);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Client";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(671, 303);
			this->dataGridView1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(479, 319);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(178, 114);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Commande";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(669, 461);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		strategy_ = gcnew GestionClients();
		this->strategy_->creer();
		/*try {
			String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
			MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

			MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into adresse values(" + 7 + "," + 27120 + ",'" + "rue" + "','" + "ville" + "')", ConnectDB);
			MySqlDataReader^ DR;
			ConnectDB->Open();
			DR = Adapt1->ExecuteReader();
			ConnectDB->Close();
			MySqlDataAdapter^ Adapt = gcnew MySqlDataAdapter("select * from adresse", ConnectDB);
			DataTable^ DT = gcnew DataTable();
			Adapt->Fill(DT);
			bindingSource1->DataSource = DT;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (exception e) {}*/
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		strategy_ = gcnew GestionCommandes();
		this->strategy_->creer();
	}
};
}