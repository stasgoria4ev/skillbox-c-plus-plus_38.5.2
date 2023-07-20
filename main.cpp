#include <QApplication>
#include "htmlTextEditormainwindow.h"
#include "ui_htmlTextEditor.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    HtmlTextEditorMainWindow window(nullptr);
    Ui::MainWindow htmlTextEditor;
    htmlTextEditor.setupUi(&window);

    window.plainTextEdit = htmlTextEditor.plainTextEdit;
    window.webEngineView = htmlTextEditor.webEngineView;

    QObject::connect(window.plainTextEdit, &QPlainTextEdit::textChanged, [&window]() {
        window.webEngineView->setHtml(window.plainTextEdit->toPlainText());
    });

    window.resize(640, 480);
    window.show();
    return QApplication::exec();
}

#include "main.moc"