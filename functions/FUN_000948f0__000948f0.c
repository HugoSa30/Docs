/*
 * Program: n42.bin
 * Function: FUN_000948f0
 * Entry: 000948f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000948f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar3 = 0;
  do {
    if ((_DAT_003fa188 & 0x80000000) != 0) {
      uVar3 = uVar3 + 1;
      if (0xff < uVar3) {
        return;
      }
      uVar4 = 0;
      puVar1 = _DAT_003fa190 + -1;
      puVar2 = _DAT_003fa18c + -1;
      do {
        _DAT_003fa18c = puVar2;
        _DAT_003fa190 = puVar1;
        puVar1 = _DAT_003fa190 + 1;
        puVar2 = _DAT_003fa18c + 1;
        *puVar2 = *puVar1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x10);
      _DAT_003fa190 = _DAT_003fa190 + 2;
      _DAT_003fa18c = _DAT_003fa18c + -0xe;
    }
    _DAT_003fa18c = _DAT_003fa18c + 0x2000;
    DAT_003fa179 = DAT_003fa179 + '\x01';
    _DAT_003fa188 = _DAT_003fa188 * 2;
  } while (_DAT_003fa188 != 0);
  return;
}

