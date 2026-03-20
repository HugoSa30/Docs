/*
 * Program: n42.bin
 * Function: FUN_00196fb8
 * Entry: 00196fb8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00196fb8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  ushort uVar8;
  
  if (B_stend == '\0') {
    uVar1 = func_0xff2187cc(&DAT_001c65a8,tmot);
    uVar2 = func_0xff2187cc(&DAT_001c65c8,nmot);
    uVar3 = func_0xff2187cc(&DAT_001c6594,tmot);
    uVar4 = func_0xff2187cc(&DAT_001c65bc,nmot);
    uVar8 = (ushort)dpsfak;
    uVar5 = func_0xff2187cc(&DAT_001c6594,tmot);
    uVar6 = func_0xff2187cc(&DAT_001c65bc,nmot);
    sVar7 = (short)((((uVar1 & 0xff) + (uVar2 & 0xff)) - ((uVar3 & 0xff) + (uVar4 & 0xff))) *
                    (int)(short)uVar8 >> 8) + (uVar5 & 0xff) + (uVar6 & 0xff);
    if (sVar7 < 0) {
      sVar7 = 0;
    }
    else if (0xff < sVar7) {
      sVar7 = 0xff;
    }
    wvespst = (byte)sVar7;
  }
  return;
}

