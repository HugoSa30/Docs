/*
 * Program: n42.bin
 * Function: FUN_0009191c
 * Entry: 0009191c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009191c(void)

{
  undefined4 uVar1;
  
  *_DAT_003f9f1c = DAT_003f9f25;
  if (DAT_003f9f25 == -0x7f) {
    _DAT_003f9f1c[1] = '\x05';
    _DAT_003f9f1c[2] = -0x72;
    _DAT_003f9f1c[3] = '\x0f';
    _DAT_003f9f1c[4] = '\x0f';
    _DAT_003f9f1c[5] = '\x01';
    _DAT_003f9f1c[6] = -1;
    uVar1 = 7;
  }
  else {
    if (DAT_003f9f25 != -0x72) {
      *_DAT_003f9f20 = 0x10;
      FUN_00095b8c(0x14,1);
      return;
    }
    _DAT_003f9f1c[1] = '\x01';
    _DAT_003f9f1c[2] = '\x01';
    _DAT_003f9f1c[3] = -8;
    uVar1 = _DAT_003f9e6c;
    _DAT_003f9f1c[4] = (char)((uint)_DAT_003f9e6c >> 0x18);
    _DAT_003f9f1c[5] = (char)((uint)uVar1 >> 0x10);
    _DAT_003f9f1c[6] = (char)((uint)uVar1 >> 8);
    _DAT_003f9f1c[7] = (char)uVar1;
    _DAT_003f9f1c[8] = '\0';
    _DAT_003f9f1c[9] = '\0';
    _DAT_003f9f1c[10] = '\0';
    _DAT_003f9f1c[0xb] = '\0';
    _DAT_003f9f1c[0xc] = '\0';
    _DAT_003f9f1c[0xd] = '\a';
    _DAT_003f9f1c[0xe] = '\0';
    _DAT_003f9f1c[0xf] = '\0';
    _DAT_003f9f1c[0x10] = -0x10;
    _DAT_003f9f1c[0x11] = '\0';
    _DAT_003f9f1c[0x12] = '\0';
    _DAT_003f9f1c[0x13] = '\0';
    _DAT_003f9f1c[0x14] = '\0';
    _DAT_003f9f1c[0x15] = '\x10';
    _DAT_003f9f1c[0x16] = '\0';
    _DAT_003f9f1c[0x17] = '\0';
    _DAT_003f9f1c[0x18] = '\0';
    _DAT_003f9f1c[0x19] = '\0';
    _DAT_003f9f1c[0x1a] = '\0';
    _DAT_003f9f1c[0x1b] = '\0';
    _DAT_003f9f1c[0x1c] = '\0';
    _DAT_003f9f1c[0x27] = '\0';
    _DAT_003f9f1c[0x1e] = '\0';
    _DAT_003f9f1c[0x1f] = '\0';
    uVar1 = 0x20;
  }
  FUN_00095b8c(10,uVar1);
  return;
}

