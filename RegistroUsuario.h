#pragma once

namespace AppZoo2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class RegistroUsuario : public System::Windows::Forms::Form
    {
    public:
        RegistroUsuario(void)
        {
            InitializeComponent();
        }

    protected:
        ~RegistroUsuario()
        {
            if (components)
            {
                delete components;
            }
        }
    private:
        System::Windows::Forms::Label^ label1;
        System::ComponentModel::Container ^components;

        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(100, 13);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Registro de usuario";
            // 
            // RegistroUsuario
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(300, 200);
            this->Controls->Add(this->label1);
            this->Name = L"RegistroUsuario";
            this->Text = L"RegistroUsuario";
            this->ResumeLayout(false);
            this->PerformLayout();
        }
    };
}
