#pragma once

#include <QtWidgets/QDialog>
#include <TDocStd_Document.hxx>
class QTreeWidgetItem;

namespace Mayo {

class DialogInspectXde : public QDialog
{
    Q_OBJECT

public:
    DialogInspectXde(QWidget *parent = nullptr);
    ~DialogInspectXde();

    void load(const Handle_TDocStd_Document& doc);

private:
    void onLabelTreeWidgetItemClicked(QTreeWidgetItem* item, int column);

    class Ui_DialogInspectXde* m_ui = nullptr;
    Handle_TDocStd_Document m_doc;
};

} // namespace Mayo
