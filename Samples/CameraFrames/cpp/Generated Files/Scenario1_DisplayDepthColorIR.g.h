﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class Button;
                ref class TextBlock;
                ref class ColumnDefinition;
                ref class Grid;
                ref class Image;
            }
        }
    }
}

namespace SDKTemplate
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class Scenario1_DisplayDepthColorIR : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        void UnloadObject(::Windows::UI::Xaml::DependencyObject^ dependencyObject);
        void DisconnectUnloadedObject(int connectionId);
    
    private:
        bool _contentLoaded;
    
        class Scenario1_DisplayDepthColorIR_obj1_Bindings;
    
        private: ::Windows::UI::Xaml::Controls::Button^ NextButton;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ outputTextBlock;
        private: ::Windows::UI::Xaml::Controls::ColumnDefinition^ WideColumn1;
        private: ::Windows::UI::Xaml::Controls::ColumnDefinition^ WideColumn2;
        private: ::Windows::UI::Xaml::Controls::Grid^ ColorPreviewBlock;
        private: ::Windows::UI::Xaml::Controls::Grid^ DepthPreviewBlock;
        private: ::Windows::UI::Xaml::Controls::Grid^ InfraredPreviewBlock;
        private: ::Windows::UI::Xaml::Controls::Image^ infraredPreviewImage;
        private: ::Windows::UI::Xaml::Controls::Image^ depthPreviewImage;
        private: ::Windows::UI::Xaml::Controls::Image^ colorPreviewImage;
    };
}

