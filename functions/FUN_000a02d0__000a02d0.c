/*
 * Program: n42.bin
 * Function: FUN_000a02d0
 * Entry: 000a02d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_000a02d0(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char cVar4;
  undefined *puVar5;
  
  param_1 = param_1 * 10;
  bVar1 = *(byte *)(((int)(-param_3 & ~param_3) >> 0x1f) * -8 + (uint)(param_6 != 0) * 4 +
                    (uint)(param_5 == 0) * -2 + 0x117fe + param_4);
  if (bVar1 == 0) {
    uVar2 = 0x81;
  }
  else if (((bVar1 & 0x40) == 0) || ((*(ushort *)(&DAT_00016c7e + param_1) >> 2 & 1) != 0)) {
    if (((bVar1 & 0x20) == 0) && ((DAT_003fa18a & 1) != 0)) {
      uVar2 = 0x83;
    }
    else {
      if (((bVar1 & 0x10) != 0) && ((*(ushort *)(&DAT_00016c7e + param_1) >> 7 & 1) != 0)) {
        cVar4 = '\x02';
        puVar5 = (undefined *)(_DAT_00016cec + (uint)*(ushort *)(param_1 + 0x16c7c) + -1);
        puVar3 = (undefined *)(param_5 + -1);
        do {
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar5;
          cVar4 = cVar4 + -1;
        } while (cVar4 != '\0');
      }
      if ((bVar1 & 0xf) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x000a042c */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)((bVar1 & 0xf) * 4 + 0x10438))();
        return uVar2;
      }
      uVar2 = 0x81;
    }
  }
  else {
    uVar2 = 0x81;
  }
  return uVar2;
}

