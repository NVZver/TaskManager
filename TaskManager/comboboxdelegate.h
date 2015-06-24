#ifndef COMBOBOXDELEGATE_H
#define COMBOBOXDELEGATE_H

#include <QObject>
#include <QItemDelegate>
#include <QModelIndex>
#include <QComboBox>
#include <QDebug>
class ComboBoxDelegate : public QItemDelegate
{

public:
    ComboBoxDelegate(QList<QString> idList,QList<QString> items, QObject *parent = 0);
        ~ComboBoxDelegate();

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    void  setEditorData(QWidget *editor, const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const;

    QList<QString> getCbxItems() const;
    void setCbxItems(const QList<QString> &value);

    QList<QString> getCbxIDList() const;
    void setCbxIDList(const QList<QString> &value);

private:
    QList<QString> cbxItems;
    QList<QString> cbxIDList;
};

#endif // COMBOBOXDELEGATE_H
