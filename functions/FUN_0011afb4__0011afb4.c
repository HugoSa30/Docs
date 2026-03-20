/*
 * Program: n42.bin
 * Function: FUN_0011afb4
 * Entry: 0011afb4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0011afb4(undefined4 param_1,char **param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  byte bVar6;
  char *pcVar7;
  uint uVar8;
  undefined2 local_38;
  byte local_34 [2];
  byte local_32;
  byte local_31;
  byte local_2f;
  char cVar5;
  ushort uVar9;
  
  bVar1 = fcmEnd;
  if (*(short *)((int)param_2 + 6) == 3) {
    pcVar7 = *param_2;
    if ((*pcVar7 != '\x02') && (*pcVar7 != '\0')) {
      *pcVar7 = '\0';
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 1;
      return;
    }
    local_38 = CONCAT11(pcVar7[1],(*param_2)[2]);
    if ((local_38 == -1) || (local_38 == -5)) {
      cVar5 = '\0';
      cVar4 = '\0';
      uVar8 = 1;
      uVar9 = 1;
      bVar6 = 0;
      if (fcmEnd != 0) {
        do {
          func_0xff2509e4(bVar6,local_34);
          if ((local_32 & 1) == 0) {
            if ((local_32 >> 1 & 1) == 0) {
              if ((local_32 >> 2 & 1) == 0) {
                if ((local_32 >> 3 & 1) == 0) {
                  if ((local_32 >> 4 & 1) == 0) {
                    if ((local_32 >> 5 & 1) == 0) {
                      if ((local_32 >> 6 & 1) == 0) {
                        bVar3 = 8;
                        iVar2 = 3;
                      }
                      else {
                        bVar3 = 4;
                        iVar2 = 2;
                      }
                    }
                    else {
                      bVar3 = 2;
                      iVar2 = 1;
                    }
                  }
                  else {
                    bVar3 = 1;
                    iVar2 = 0;
                  }
                }
                else {
                  bVar3 = 8;
                  iVar2 = 3;
                }
              }
              else {
                bVar3 = 4;
                iVar2 = 2;
              }
            }
            else {
              bVar3 = 2;
              iVar2 = 1;
            }
          }
          else {
            bVar3 = 1;
            iVar2 = 0;
          }
          if (**param_2 == '\x02') {
            local_38 = *(short *)(&CDKAAA + (uint)local_34[0] * 2);
          }
          else {
            local_38 = *(short *)(&DAT_001d3b8c + ((uint)local_34[0] * 4 + iVar2) * 2);
          }
          (*param_2)[uVar8 & 0xff] = local_38._0_1_;
          (*param_2)[uVar8 + 1 & 0xff] = (char)local_38;
          if ((local_2f >> 1 & 1) == 0) {
            if ((local_31 & 1) != 0) {
              bVar3 = bVar3 | 0x40;
            }
          }
          else if ((local_31 & 1) == 0) {
            bVar3 = bVar3 | 0x20;
          }
          else {
            bVar3 = bVar3 | 0x60;
          }
          if (((byte)(&UNK_003fde62)[(uint)local_34[0] * 2] >> 5 & 1) == 0) {
            bVar3 = bVar3 | 0x10;
          }
          if ((&DAT_001d44b0)[(uint)(byte)(&CLAAAA)[local_34[0]] * 0xd] != '\0') {
            bVar3 = bVar3 | 0x80;
          }
          (*param_2)[uVar8 + 2 & 0xff] = bVar3;
          uVar8 = uVar8 + 3;
          uVar9 = (ushort)uVar8;
          cVar4 = cVar5 + '\x01';
          bVar6 = bVar6 + 1;
          cVar5 = cVar4;
        } while (bVar6 < bVar1);
      }
      **param_2 = cVar4;
      *(ushort *)(param_2 + 2) = uVar9 & 0xff;
      *(undefined *)((int)param_2 + 10) = 1;
      return;
    }
    if (((local_38 == -4) || (local_38 == -3)) || (local_38 == -2)) {
      **param_2 = '\0';
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 1;
      return;
    }
    **param_2 = '\x12';
  }
  else {
    **param_2 = '\x12';
  }
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

