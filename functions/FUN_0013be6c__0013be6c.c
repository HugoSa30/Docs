/*
 * Program: n42.bin
 * Function: FUN_0013be6c
 * Entry: 0013be6c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013be6c(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  if (((B_pwf != '\0') && ((DAT_003fa66c & 1) == 0)) && (B_pwml2cok != '\0')) {
    _DAT_003fd7ec = func_0xff221800(kmstand,0xd555);
    DAT_003fa66c = DAT_003fa66c & 0xfe | 1;
  }
  bVar1 = false;
  _DAT_003fd7ee = _DAT_003fd7ee + vfzg_u;
  if (0xe0f < _DAT_003fd7ee) {
    bVar1 = true;
    _DAT_003fd7ee = _DAT_003fd7ee - 0xe10;
    DAT_003fd7f0 = DAT_003fd7f0 + 1;
    if ((5 < DAT_003fd7f0) && (DAT_003fd7f0 = 0, _DAT_003fd7ec != -1)) {
      _DAT_003fd7ec = _DAT_003fd7ec + 1;
    }
  }
  if (DAT_003fbec7 == '\0') {
    uVar3 = (uint)fcmEnd;
    if (uVar3 == 0) {
      _DAT_003fd7ea = 0;
    }
    else {
      uVar2 = 0;
      do {
        if (10 < uVar2) {
          return;
        }
        if ((*(ushort *)(&UNK_003fcf50 + uVar2 * 0x28) >> 1 & 1) != 0) {
          return;
        }
        uVar2 = uVar2 + 1 & 0xff;
        if ((uVar3 <= uVar2) || (10 < uVar2)) {
          _DAT_003fd7ea = 0;
          return;
        }
      } while (uVar2 < uVar3);
    }
  }
  else if ((bVar1) && (_DAT_003fd7ea != -1)) {
    _DAT_003fd7ea = _DAT_003fd7ea + 1;
  }
  return;
}

