/*
 * Program: n42.bin
 * Function: FUN_0011cbf4
 * Entry: 0011cbf4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011cbf4(undefined4 param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (*(short *)((int)param_2 + 6) == 0) {
    *(undefined *)*param_2 = 0x10;
  }
  else {
    uVar3 = (uint)*(byte *)(param_2 + 3);
    if (uVar3 < 0x84) {
      if (uVar3 == 0x83) {
        uVar2 = FUN_0011c3b8(param_2);
        *(ushort *)(param_2 + 2) = uVar2;
        if (1 < uVar2) {
          *(undefined *)((int)param_2 + 10) = 1;
          return;
        }
        *(undefined *)((int)param_2 + 10) = 2;
        return;
      }
      if (uVar3 < 0x41) {
                    /* WARNING: Could not emulate address calculation at 0x0011cc4c */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar3 * 4 + 0xf1cc58))();
        return;
      }
    }
    else if (uVar3 < 0xe7) {
      if (uVar3 == 0xe6) {
        B_fa = 1;
        B_fadisa = 1;
        *(undefined *)*param_2 = 0xe6;
        *(undefined *)(*param_2 + 1) = DAT_005b8ed5;
        *(undefined2 *)(param_2 + 2) = 2;
        *(undefined *)((int)param_2 + 10) = 1;
        return;
      }
      if (uVar3 < 0xdc) {
        if (uVar3 == 0xdb) {
          B_fa = 1;
          B_fallas = 1;
          puVar4 = (undefined *)*param_2;
          *puVar4 = 0xdb;
          *(undefined *)(*param_2 + 1) = puVar4[1];
          *(undefined2 *)(param_2 + 2) = 2;
          *(undefined *)((int)param_2 + 10) = 1;
          return;
        }
        if (uVar3 == 0x84) {
          uVar2 = FUN_0011cac4(param_2);
          *(ushort *)(param_2 + 2) = uVar2;
          if (1 < uVar2) {
            *(undefined *)((int)param_2 + 10) = 1;
            return;
          }
          *(undefined *)((int)param_2 + 10) = 2;
          return;
        }
        if (uVar3 == 0xd8) {
          B_fa = 1;
          B_falra = 1;
          puVar4 = (undefined *)*param_2;
          *puVar4 = 0xd8;
          *(undefined *)(*param_2 + 1) = puVar4[1];
          *(undefined2 *)(param_2 + 2) = 2;
          *(undefined *)((int)param_2 + 10) = 1;
          return;
        }
        if (uVar3 == 0xd9) {
          B_fa = 1;
          B_falr = 1;
          *(undefined *)*param_2 = 0xd9;
          *(ENUM_005b91c0 *)(*param_2 + 1) = flglrs;
          *(ENUM_005b91c1 *)(*param_2 + 2) = B_lr2s2;
          *(undefined2 *)(param_2 + 2) = 3;
          *(undefined *)((int)param_2 + 10) = 1;
          return;
        }
      }
      else {
        if (uVar3 == 0xdc) {
          B_fa = 1;
          B_favvtal = 1;
          puVar4 = (undefined *)*param_2;
          *puVar4 = 0xdc;
          *(undefined *)(*param_2 + 1) = puVar4[1];
          *(undefined2 *)(param_2 + 2) = 2;
          *(undefined *)((int)param_2 + 10) = 1;
          return;
        }
        if (uVar3 == 0xe0) {
          B_fa = 1;
          B_fadka = 1;
          puVar4 = (undefined *)*param_2;
          *puVar4 = 0xe0;
          *(undefined *)(*param_2 + 1) = puVar4[1];
          *(undefined2 *)(param_2 + 2) = 2;
          *(undefined *)((int)param_2 + 10) = 1;
          return;
        }
      }
    }
    else if (uVar3 < 0xec) {
      if (uVar3 == 0xeb) {
        if (nmot_w == 0) {
          *(undefined *)*param_2 = 0x22;
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 2;
          return;
        }
        bVar1 = ((undefined *)*param_2)[1];
        if (bVar1 - 1 < 3) {
          if (bVar1 == 1) {
            B_fa = 1;
            B_fakat = 1;
          }
          else if (bVar1 == 2) {
            B_fa = 1;
            B_fakat2 = 1;
          }
          else if (bVar1 == 3) {
            B_fa = 1;
            B_fakat = 1;
            B_fakat2 = 1;
          }
          *(undefined *)*param_2 = 0xeb;
          *(byte *)(*param_2 + 1) = bVar1;
          *(undefined2 *)(param_2 + 2) = 2;
          *(undefined *)((int)param_2 + 10) = 1;
          return;
        }
        *(undefined *)*param_2 = 0x12;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
        return;
      }
      if (uVar3 == 0xe8) {
        if (nmot_w != 0) {
          B_fa = 1;
          B_falsv = 1;
          B_falsv2 = 1;
          *(undefined *)*param_2 = 0xe8;
          *(byte *)(*param_2 + 1) =
               ((B_dylsu & B_dylsu) !=
               ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft)) * '\x02'
               & 2U | (B_dylsu & B_dylsuav) !=
                      ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft);
          *(byte *)(*param_2 + 2) =
               ((B_lshkpft2 & B_dylsu2) !=
               ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2)
               ) * '\x02' & 2U |
               (B_lshkpft2 & B_dylsuav2) !=
               ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2)
          ;
          *(undefined2 *)(param_2 + 2) = 3;
          *(undefined *)((int)param_2 + 10) = 1;
          return;
        }
        *(undefined *)*param_2 = 0x22;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
        return;
      }
      if (uVar3 == 0xe9) {
        if (nmot_w == 0) {
          FUN_00123db8();
          (**(code **)(_DAT_003fbd60 + 0x24))(0xf1ca84);
          *(undefined *)*param_2 = 0xe9;
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 1;
          return;
        }
        *(undefined *)*param_2 = 0x22;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
        return;
      }
    }
    else {
      if (uVar3 == 0xed) {
        if (nmot_w == 0) {
          *(undefined *)*param_2 = 0x22;
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 2;
          return;
        }
        bVar1 = ((undefined *)*param_2)[1];
        if (bVar1 - 1 < 3) {
          if (bVar1 == 1) {
            B_fa = 1;
            B_falsh = 1;
          }
          else if (bVar1 == 2) {
            B_fa = 1;
            B_falsh2 = 1;
          }
          else if (bVar1 == 3) {
            B_fa = 1;
            B_falsh = 1;
            B_falsh2 = 1;
          }
          *(undefined *)*param_2 = 0xed;
          *(byte *)(*param_2 + 1) = bVar1;
          *(undefined2 *)(param_2 + 2) = 2;
          *(undefined *)((int)param_2 + 10) = 1;
          return;
        }
        *(undefined *)*param_2 = 0x12;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
        return;
      }
      if (uVar3 == 0xf3) {
        B_fa = 1;
        B_fadk = 1;
        B_wdksap = 1;
        puVar4 = (undefined *)*param_2;
        *puVar4 = 0xf3;
        *(undefined *)(*param_2 + 1) = puVar4[1];
        *(undefined2 *)(param_2 + 2) = 2;
        *(undefined *)((int)param_2 + 10) = 1;
        return;
      }
    }
    *(undefined *)*param_2 = 0x11;
  }
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

