/*
 * Program: n42.bin
 * Function: FUN_00107104
 * Entry: 00107104
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00107104(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar3 = 0;
  do {
    if ((_DAT_003fb970 & 0x80000000) != 0) {
      uVar3 = uVar3 + 1;
      if (0xff < uVar3) {
        return;
      }
      uVar4 = 0;
      puVar1 = _DAT_003fb974 + -1;
      puVar2 = _DAT_003fb978 + -1;
      do {
        _DAT_003fb978 = puVar2;
        _DAT_003fb974 = puVar1;
        uVar4 = uVar4 + 1;
        puVar2 = _DAT_003fb978 + 1;
        puVar1 = _DAT_003fb974 + 1;
        *puVar1 = *puVar2;
      } while (uVar4 < 0x10);
      _DAT_003fb978 = _DAT_003fb978 + 2;
      _DAT_003fb974 = _DAT_003fb974 + -0xe;
    }
    _DAT_003fb974 = _DAT_003fb974 + 0x2000;
    DAT_003fb961 = DAT_003fb961 + '\x01';
    _DAT_003fb970 = _DAT_003fb970 * 2;
  } while (_DAT_003fb970 != 0);
  return;
}

