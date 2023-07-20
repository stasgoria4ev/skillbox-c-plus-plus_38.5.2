//
// Created by stas on 18.07.2023.
//
#pragma once

#ifndef SKILLBOX_C_PLUS_PLUS_38_5_2_HTMLTEXTEDITORMAINWINDOW_H
#define SKILLBOX_C_PLUS_PLUS_38_5_2_HTMLTEXTEDITORMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWebEngineWidgets/QWebEngineView>

class HtmlTextEditorMainWindow : public QMainWindow {
    Q_OBJECT

public:

    QPlainTextEdit* plainTextEdit{};
    QWebEngineView* webEngineView{};

    explicit HtmlTextEditorMainWindow(QWidget* parent);
};

#endif //SKILLBOX_C_PLUS_PLUS_38_5_2_HTMLTEXTEDITORMAINWINDOW_H

