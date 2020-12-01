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
		void afficherTable(void) {
			try {
				String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
				MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

				/*MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into adresse values(" + 7 + "," + 27120 + ",'" + "rue" + "','" + "ville" + "')", ConnectDB);
				MySqlDataReader^ DR;
				ConnectDB->Open();
				DR = Adapt1->ExecuteReader();
				ConnectDB->Close();*/
				MySqlDataAdapter^ Adapt = gcnew MySqlDataAdapter("select * from client", ConnectDB);
				DataTable^ DT = gcnew DataTable();
				Adapt->Fill(DT);
				bindingSource1->DataSource = DT;
				dataGridView1->DataSource = bindingSource1;
			}
			catch (exception e) {}
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

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ nomClient;
	private: System::Windows::Forms::TextBox^ prenomClient;
	private: System::Windows::Forms::TextBox^ date_naissanceClient;
	private: System::Windows::Forms::TextBox^ adresse_livraisonClient;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ adresse_facturationClient;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ clientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ creerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rechercherToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ commandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nouveauToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ rechercherToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nouveauToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ rechercherToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ personnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nouveauToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ rechercherToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ statistiquesToolStripMenuItem;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::GroupBox^ groupBox1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->nomClient = (gcnew System::Windows::Forms::TextBox());
			this->prenomClient = (gcnew System::Windows::Forms::TextBox());
			this->date_naissanceClient = (gcnew System::Windows::Forms::TextBox());
			this->adresse_livraisonClient = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->adresse_facturationClient = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->clientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rechercherToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->commandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nouveauToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rechercherToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nouveauToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rechercherToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nouveauToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rechercherToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statistiquesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(580, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(819, 444);
			this->dataGridView1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Client";
			this->button1->UseVisualStyleBackColor = true;

			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Commande";
			this->button2->UseVisualStyleBackColor = true;

			// 
			// nomClient
			// 
			this->nomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomClient->Location = System::Drawing::Point(189, 38);
			this->nomClient->Name = L"nomClient";
			this->nomClient->Size = System::Drawing::Size(127, 22);
			this->nomClient->TabIndex = 3;
			// 
			// prenomClient
			// 
			this->prenomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenomClient->Location = System::Drawing::Point(189, 96);
			this->prenomClient->Name = L"prenomClient";
			this->prenomClient->Size = System::Drawing::Size(127, 22);
			this->prenomClient->TabIndex = 3;
			// 
			// date_naissanceClient
			// 
			this->date_naissanceClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->date_naissanceClient->Location = System::Drawing::Point(189, 144);
			this->date_naissanceClient->Name = L"date_naissanceClient";
			this->date_naissanceClient->Size = System::Drawing::Size(127, 22);
			this->date_naissanceClient->TabIndex = 3;
			// 
			// adresse_livraisonClient
			// 
			this->adresse_livraisonClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->adresse_livraisonClient->Location = System::Drawing::Point(189, 211);
			this->adresse_livraisonClient->Name = L"adresse_livraisonClient";
			this->adresse_livraisonClient->Size = System::Drawing::Size(127, 22);
			this->adresse_livraisonClient->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(126, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(105, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"prenom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"date naissance";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"adresse livraison";
			// 
			// adresse_facturationClient
			// 
			this->adresse_facturationClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->adresse_facturationClient->Location = System::Drawing::Point(189, 284);
			this->adresse_facturationClient->Name = L"adresse_facturationClient";
			this->adresse_facturationClient->Size = System::Drawing::Size(127, 22);
			this->adresse_facturationClient->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 284);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"adresse facturation";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->clientToolStripMenuItem,
					this->commandeToolStripMenuItem, this->stockToolStripMenuItem, this->personnelToolStripMenuItem, this->statistiquesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1422, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// clientToolStripMenuItem
			// 
			this->clientToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->creerToolStripMenuItem,
					this->modifierToolStripMenuItem, this->supprimerToolStripMenuItem, this->rechercherToolStripMenuItem
			});
			this->clientToolStripMenuItem->Name = L"clientToolStripMenuItem";
			this->clientToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			this->clientToolStripMenuItem->Text = L"Client";
			// 
			// creerToolStripMenuItem
			// 
			this->creerToolStripMenuItem->Name = L"creerToolStripMenuItem";
			this->creerToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->creerToolStripMenuItem->Text = L"Nouveau";
			this->creerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::creerToolStripMenuItem_Click);
			// 
			// modifierToolStripMenuItem
			// 
			this->modifierToolStripMenuItem->Name = L"modifierToolStripMenuItem";
			this->modifierToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->modifierToolStripMenuItem->Text = L"Modifier";
			// 
			// supprimerToolStripMenuItem
			// 
			this->supprimerToolStripMenuItem->Name = L"supprimerToolStripMenuItem";
			this->supprimerToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->supprimerToolStripMenuItem->Text = L"Supprimer";
			// 
			// rechercherToolStripMenuItem
			// 
			this->rechercherToolStripMenuItem->Name = L"rechercherToolStripMenuItem";
			this->rechercherToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->rechercherToolStripMenuItem->Text = L"Rechercher";
			// 
			// commandeToolStripMenuItem
			// 
			this->commandeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->nouveauToolStripMenuItem,
					this->modifierToolStripMenuItem1, this->supprimerToolStripMenuItem1, this->rechercherToolStripMenuItem1
			});
			this->commandeToolStripMenuItem->Name = L"commandeToolStripMenuItem";
			this->commandeToolStripMenuItem->Size = System::Drawing::Size(100, 24);
			this->commandeToolStripMenuItem->Text = L"Commande";
			// 
			// nouveauToolStripMenuItem
			// 
			this->nouveauToolStripMenuItem->Name = L"nouveauToolStripMenuItem";
			this->nouveauToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->nouveauToolStripMenuItem->Text = L"Nouveau";
			// 
			// modifierToolStripMenuItem1
			// 
			this->modifierToolStripMenuItem1->Name = L"modifierToolStripMenuItem1";
			this->modifierToolStripMenuItem1->Size = System::Drawing::Size(165, 26);
			this->modifierToolStripMenuItem1->Text = L"Modifier";
			// 
			// supprimerToolStripMenuItem1
			// 
			this->supprimerToolStripMenuItem1->Name = L"supprimerToolStripMenuItem1";
			this->supprimerToolStripMenuItem1->Size = System::Drawing::Size(165, 26);
			this->supprimerToolStripMenuItem1->Text = L"Supprimer";
			// 
			// rechercherToolStripMenuItem1
			// 
			this->rechercherToolStripMenuItem1->Name = L"rechercherToolStripMenuItem1";
			this->rechercherToolStripMenuItem1->Size = System::Drawing::Size(165, 26);
			this->rechercherToolStripMenuItem1->Text = L"Rechercher";
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->nouveauToolStripMenuItem1,
					this->modifierToolStripMenuItem2, this->supprimerToolStripMenuItem2, this->rechercherToolStripMenuItem2
			});
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->stockToolStripMenuItem->Text = L"Stock";
			// 
			// nouveauToolStripMenuItem1
			// 
			this->nouveauToolStripMenuItem1->Name = L"nouveauToolStripMenuItem1";
			this->nouveauToolStripMenuItem1->Size = System::Drawing::Size(165, 26);
			this->nouveauToolStripMenuItem1->Text = L"Nouveau";
			// 
			// modifierToolStripMenuItem2
			// 
			this->modifierToolStripMenuItem2->Name = L"modifierToolStripMenuItem2";
			this->modifierToolStripMenuItem2->Size = System::Drawing::Size(165, 26);
			this->modifierToolStripMenuItem2->Text = L"Modifier";
			// 
			// supprimerToolStripMenuItem2
			// 
			this->supprimerToolStripMenuItem2->Name = L"supprimerToolStripMenuItem2";
			this->supprimerToolStripMenuItem2->Size = System::Drawing::Size(165, 26);
			this->supprimerToolStripMenuItem2->Text = L"Supprimer";
			// 
			// rechercherToolStripMenuItem2
			// 
			this->rechercherToolStripMenuItem2->Name = L"rechercherToolStripMenuItem2";
			this->rechercherToolStripMenuItem2->Size = System::Drawing::Size(165, 26);
			this->rechercherToolStripMenuItem2->Text = L"Rechercher";
			// 
			// personnelToolStripMenuItem
			// 
			this->personnelToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->nouveauToolStripMenuItem2,
					this->modifierToolStripMenuItem3, this->supprimerToolStripMenuItem3, this->rechercherToolStripMenuItem3
			});
			this->personnelToolStripMenuItem->Name = L"personnelToolStripMenuItem";
			this->personnelToolStripMenuItem->Size = System::Drawing::Size(86, 24);
			this->personnelToolStripMenuItem->Text = L"Personnel";
			// 
			// nouveauToolStripMenuItem2
			// 
			this->nouveauToolStripMenuItem2->Name = L"nouveauToolStripMenuItem2";
			this->nouveauToolStripMenuItem2->Size = System::Drawing::Size(165, 26);
			this->nouveauToolStripMenuItem2->Text = L"Nouveau";
			// 
			// modifierToolStripMenuItem3
			// 
			this->modifierToolStripMenuItem3->Name = L"modifierToolStripMenuItem3";
			this->modifierToolStripMenuItem3->Size = System::Drawing::Size(165, 26);
			this->modifierToolStripMenuItem3->Text = L"Modifier";
			// 
			// supprimerToolStripMenuItem3
			// 
			this->supprimerToolStripMenuItem3->Name = L"supprimerToolStripMenuItem3";
			this->supprimerToolStripMenuItem3->Size = System::Drawing::Size(165, 26);
			this->supprimerToolStripMenuItem3->Text = L"Supprimer";
			// 
			// rechercherToolStripMenuItem3
			// 
			this->rechercherToolStripMenuItem3->Name = L"rechercherToolStripMenuItem3";
			this->rechercherToolStripMenuItem3->Size = System::Drawing::Size(165, 26);
			this->rechercherToolStripMenuItem3->Text = L"Rechercher";
			// 
			// statistiquesToolStripMenuItem
			// 
			this->statistiquesToolStripMenuItem->Name = L"statistiquesToolStripMenuItem";
			this->statistiquesToolStripMenuItem->Size = System::Drawing::Size(99, 24);
			this->statistiquesToolStripMenuItem->Text = L"Statistiques";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->adresse_facturationClient);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->nomClient);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->adresse_livraisonClient);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->prenomClient);
			this->groupBox1->Controls->Add(this->date_naissanceClient);
			this->groupBox1->Location = System::Drawing::Point(168, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(374, 403);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Client";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1422, 491);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
private: System::Void creerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	strategy_ = gcnew GestionClients(nomClient->Text, prenomClient->Text, adresse_facturationClient->Text);
	this->strategy_->creer();
	afficherTable();
}
};
}