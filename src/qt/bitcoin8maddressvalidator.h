// Copyright (c) 2011-2014 The Bitcoin8m Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN8M_QT_BITCOIN8MADDRESSVALIDATOR_H
#define BITCOIN8M_QT_BITCOIN8MADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class Bitcoin8mAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit Bitcoin8mAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Bitcoin8m address widget validator, checks for a valid bitcoin8m address.
 */
class Bitcoin8mAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit Bitcoin8mAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOIN8M_QT_BITCOIN8MADDRESSVALIDATOR_H
