/*
 * Program: n42.bin
 * Function: FUN_001199d4
 * Entry: 001199d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001199d4(undefined4 param_1,int *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined extraout_r4;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  _DAT_003f9c90 = &DAT_001c0890;
  DAT_003f9bd2 = 0xff;
  if (*(short *)((int)param_2 + 6) == 2) {
    FUN_00101dc8(0,param_2);
    if (*(char *)((int)param_2 + 10) == '\x02') {
      puVar1 = (undefined *)*param_2;
      uVar2 = (uint)*(byte *)(param_2 + 3) * 0x100 + (uint)(byte)puVar1[1];
      if ((uVar2 & 0xffff) == 0x2100) {
        *(undefined *)((int)param_2 + 10) = 1;
        *puVar1 = (char)(uVar2 >> 8);
        *(char *)(*param_2 + 1) = (char)uVar2;
        FUN_001197a8(param_2);
      }
      else {
        uVar5 = 0;
        while( true ) {
          iVar7 = uVar5 * 8;
          iVar6 = iVar7 + 0xfea2c0;
          if (*(int *)(iVar7 + 0xfea2c4) == 0) break;
          if ((uint)*(ushort *)(uVar5 * 8 + 0xfea2c0) == (uVar2 & 0xffff)) {
            if (*(char *)(iVar7 + 0xfea2c3) != '\0') {
              uVar2 = uVar2 & 0xffff;
              iVar7 = iVar6;
              FUN_001193e4(uVar2);
              puVar1 = (undefined *)*param_2;
              *puVar1 = (char)(uVar2 >> 8);
              puVar1 = puVar1 + 1;
              *puVar1 = extraout_r4;
              uVar3 = 2;
              uVar2 = 0;
              uVar4 = 2;
              if (*(char *)(iVar7 + 3) != '\0') {
                do {
                  uVar5 = 0;
                  if (*(char *)(*(int *)(iVar6 + 4) + uVar2 * 8) != '\0') {
                    do {
                      puVar1 = puVar1 + 1;
                      *puVar1 = *(undefined *)
                                 (*(int *)(*(int *)(iVar6 + 4) + uVar2 * 8 + 4) + uVar5);
                      uVar5 = uVar5 + 1 & 0xff;
                    } while (uVar5 < *(byte *)(*(int *)(iVar6 + 4) + uVar2 * 8));
                  }
                  uVar3 = uVar4 + *(byte *)(*(int *)(iVar6 + 4) + uVar2 * 8);
                  uVar2 = uVar2 + 1 & 0xff;
                  uVar4 = uVar3;
                } while (uVar2 < *(byte *)(iVar6 + 3));
              }
              *(ushort *)(param_2 + 2) = uVar3 & 0xff;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
            *puVar1 = 0x11;
            goto LAB_00119ba0;
          }
          uVar5 = uVar5 + 1 & 0xff;
        }
        *puVar1 = 0x11;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
      }
    }
  }
  else {
    *(undefined *)*param_2 = 0x10;
LAB_00119ba0:
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
  }
  return;
}

