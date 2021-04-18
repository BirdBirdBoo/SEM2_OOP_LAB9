#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <collections/Collection.h>
#include <collections/Array.h>
#include <collections/Set.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addArrayButton_clicked();

    void on_addSetButton_clicked();

    void on_collectionList_currentRowChanged(int currentRow);

private:
    Ui::MainWindow *ui;

    std::vector<Collection *> collections;

    void handleCollectionAdded(Collection &collection);

    void handleCollectionChanged(int index);

    void setIndexEditorEnabled(bool enabled);

    void setAddElementEnabled(bool enabled);

    void setUpInputs();
};
#endif // MAINWINDOW_H
