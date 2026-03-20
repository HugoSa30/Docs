/*
 * Program: n42.bin
 * Function: FUN_001ad3d8
 * Entry: 001ad3d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ad3d8(uint param_1)

{
  char cVar1;
  
  if ((int)param_1 < 6) {
    _DAT_002fc02e =
         _DAT_002fc02e & ~(ushort)(1 << (param_1 & 0x3f)) | (ushort)(1 << (param_1 & 0x3f));
    cVar1 = (*(code *)&SUB_00fac610)();
    if (cVar1 == '\x01') {
      _DAT_0047000e =
           _DAT_0047000e & ~(ushort)(1 << (param_1 & 0x3f)) | (ushort)(1 << (param_1 & 0x3f));
    }
    else {
      _DAT_002fc026 =
           _DAT_002fc026 & ~(ushort)(1 << (param_1 & 0x3f)) | (ushort)(1 << (param_1 & 0x3f));
    }
  }
  return;
}

