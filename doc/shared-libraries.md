Shared Libraries
================

## bitcoin8mconsensus

The purpose of this library is to make the verification functionality that is critical to Bitcoin8m's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `bitcoin8mconsensus.h` located in  `src/script/bitcoin8mconsensus.h`.

#### Version

`bitcoin8mconsensus_version` returns an `unsigned int` with the the API version *(currently at an experimental `0`)*.

#### Script Validation

`bitcoin8mconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `bitcoin8mconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `bitcoin8mconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `bitcoin8mconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/bitcoin8m/bips/blob/master/bip-0016.mediawiki)) subscripts
- `bitcoin8mconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/bitcoin8m/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `bitcoin8mconsensus_ERR_OK` - No errors with input parameters *(see the return value of `bitcoin8mconsensus_verify_script` for the verification status)*
- `bitcoin8mconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `bitcoin8mconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `bitcoin8mconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NBitcoin8m](https://github.com/NicolasDorier/NBitcoin8m/blob/master/NBitcoin8m/Script.cs#L814) (.NET Bindings)
- [node-libbitcoin8mconsensus](https://github.com/bitpay/node-libbitcoin8mconsensus) (Node.js Bindings)
- [java-libbitcoin8mconsensus](https://github.com/dexX7/java-libbitcoin8mconsensus) (Java Bindings)
- [bitcoin8mconsensus-php](https://github.com/Bit-Wasp/bitcoin8mconsensus-php) (PHP Bindings)
