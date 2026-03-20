/*
 * Program: n42.bin
 * Function: FUN_00101198
 * Entry: 00101198
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_00101198(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (int)param_3) {
    do {
      if (((uint)param_1 & 1) == 0) {
        if (param_3 == 1) {
          uVar2 = *param_1 & 0xff;
          uVar3 = (ushort)*(byte *)param_2 << 8;
          goto LAB_00101204;
        }
        uVar3 = *param_2;
        param_2 = param_2 + 1;
        iVar4 = 0xfffe;
      }
      else {
        puVar1 = (ushort *)((int)param_1 + -1);
        param_1 = (ushort *)((int)param_1 + -1);
        uVar3 = *puVar1 & 0xff00;
        uVar2 = (ushort)*(byte *)param_2;
LAB_00101204:
        uVar3 = uVar3 | uVar2;
        param_2 = (ushort *)((int)param_2 + 1);
        iVar4 = 0xffff;
      }
      param_3 = param_3 + iVar4 & 0xffff;
      *DAT_005bd51c = *(undefined2 *)(DAT_005bd530 + 10);
      *param_1 = uVar3;
      param_1 = param_1 + 1;
      uVar5 = 0;
      do {
        uVar6 = FUN_00100d90();
        if (uVar6 == 0x2000) {
          uVar6 = 0x80;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 < 10000000) && (uVar6 == 0x80));
      if (uVar5 == 10000000) {
        uVar6 = 0x1000;
      }
    } while ((param_3 != 0) && (uVar6 == 0));
  }
  FUN_00100d6c();
  return uVar6 & 0xffff;
}

