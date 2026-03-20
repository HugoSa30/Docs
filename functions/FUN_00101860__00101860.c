/*
 * Program: n42.bin
 * Function: FUN_00101860
 * Entry: 00101860
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00101860(undefined4 param_1,byte **param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  ushort uVar4;
  undefined uVar5;
  byte bVar6;
  byte *pbVar7;
  
  pbVar2 = *param_2;
  pbVar7 = (byte *)((uint)*pbVar2 * 0x10000 + (uint)pbVar2[1] * 0x100 + (uint)pbVar2[2]);
  uVar4 = (ushort)pbVar2[4];
  if (pbVar2[3] == 7) {
    pbVar7 = pbVar7 + 0xffe200;
    if ((((_DAT_003ffff0 == 2) && (uVar4 == 0x40)) && (((uint)pbVar7 & 0x3f) == 0)) &&
       (((byte *)0xffe1ff < pbVar7 && (pbVar7 < (byte *)0xffe581)))) {
      FUN_00104370();
      func_0xff7bd004(pbVar7,0x40,pbVar2 + 5,0);
      **param_2 = (byte)((uint)pbVar7 >> 0x10);
      (*param_2)[1] = (byte)((uint)pbVar7 >> 8);
      (*param_2)[2] = (byte)pbVar7;
      (*param_2)[3] = 7;
      *(undefined2 *)(param_2 + 2) = 4;
      uVar5 = 1;
      goto LAB_001019d4;
    }
    bVar6 = 0x31;
  }
  else {
    if (*(short *)((int)param_2 + 6) == (ushort)(uVar4 + 5)) {
      uVar3 = 0;
      if (uVar4 != 0) {
        pbVar2 = pbVar2 + 4;
        pbVar1 = pbVar7 + -1;
        do {
          pbVar7 = pbVar1;
          pbVar2 = pbVar2 + 1;
          pbVar1 = pbVar7 + 1;
          *pbVar1 = *pbVar2;
          uVar3 = uVar3 + 1 & 0xff;
        } while (uVar3 < uVar4);
        pbVar7 = pbVar7 + 2;
      }
      **param_2 = (byte)((uint)pbVar7 >> 0x10);
      (*param_2)[1] = (byte)((uint)pbVar7 >> 8);
      (*param_2)[2] = (byte)pbVar7;
      *(undefined2 *)(param_2 + 2) = 3;
      uVar5 = 1;
      goto LAB_001019d4;
    }
    bVar6 = 0x12;
  }
  *pbVar2 = bVar6;
  *(undefined2 *)(param_2 + 2) = 1;
  uVar5 = 2;
LAB_001019d4:
  *(undefined *)((int)param_2 + 10) = uVar5;
  return;
}

