/*
 * Program: n42.bin
 * Function: FUN_001ad210
 * Entry: 001ad210
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ad210(int param_1,uint param_2)

{
  char cVar2;
  uint uVar1;
  ushort uVar3;
  
  if ((int)param_2 < 6) {
    _DAT_002fc02e =
         _DAT_002fc02e & ~(ushort)(1 << (param_2 & 0x3f)) | (ushort)(1 << (param_2 & 0x3f));
    cVar2 = (*(code *)&SUB_00fac610)();
    if (cVar2 == '\x01') {
      uVar1 = 0;
      if (0 < param_1) {
        do {
          uVar3 = 0;
          do {
            _DAT_0047000e =
                 _DAT_0047000e & ~(ushort)(1 << (param_2 & 0x3f)) | (ushort)(0 << (param_2 & 0x3f));
            uVar3 = uVar3 + 1;
          } while (uVar3 < 10);
          uVar3 = 0;
          do {
            _DAT_0047000e =
                 _DAT_0047000e & ~(ushort)(1 << (param_2 & 0x3f)) | (ushort)(1 << (param_2 & 0x3f));
            uVar3 = uVar3 + 1;
          } while (uVar3 < 10);
          uVar1 = uVar1 + 1 & 0xffff;
        } while ((int)uVar1 < param_1);
      }
    }
    else {
      uVar1 = 0;
      if (0 < param_1) {
        do {
          uVar3 = 0;
          do {
            _DAT_002fc026 =
                 _DAT_002fc026 & ~(ushort)(1 << (param_2 & 0x3f)) | (ushort)(0 << (param_2 & 0x3f));
            uVar3 = uVar3 + 1;
          } while (uVar3 < 10);
          uVar3 = 0;
          do {
            _DAT_002fc026 =
                 _DAT_002fc026 & ~(ushort)(1 << (param_2 & 0x3f)) | (ushort)(1 << (param_2 & 0x3f));
            uVar3 = uVar3 + 1;
          } while (uVar3 < 10);
          uVar1 = uVar1 + 1 & 0xffff;
        } while ((int)uVar1 < param_1);
      }
    }
  }
  return;
}

