/*
 * Program: n42.bin
 * Function: FUN_001af078
 * Entry: 001af078
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001af078(void)

{
  undefined4 uVar1;
  
  if (((int)(uint)*(ushort *)(*_DAT_003fc354 + 0x20) >> (*(byte *)(_DAT_003fc354 + 2) & 0x3f) & 1U)
      == 0) {
    uVar1 = 0;
  }
  else {
    (*(code *)&SUB_00faf170)(*_DAT_003fc354,(uint)*(byte *)(_DAT_003fc354 + 2),0);
    *(ushort *)(*_DAT_003fc354 + 0x20) = ~(ushort)(1 << (*(byte *)(_DAT_003fc354 + 2) & 0x3f));
    _DAT_003fc35c = 5;
    if (*(code **)(_DAT_003fc350 + 8) != (code *)0x0) {
      (**(code **)(_DAT_003fc350 + 8))(0xc,1,0,0);
    }
    (*(code *)&SUB_00faf9a8)(0xc);
    uVar1 = 1;
  }
  return uVar1;
}

