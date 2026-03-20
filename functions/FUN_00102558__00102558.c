/*
 * Program: n42.bin
 * Function: FUN_00102558
 * Entry: 00102558
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00102558(undefined4 param_1,byte **param_2)

{
  byte bVar4;
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined4 *puVar5;
  undefined uVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uStack_54;
  undefined4 local_50 [5];
  int iStack_3c;
  int local_38 [8];
  
  bVar4 = *(byte *)(param_2 + 3);
  sVar3 = *(short *)((int)param_2 + 6);
  if (bVar4 < 9) {
    if (bVar4 == 8) {
      if ((nmot_w == 0) && (((_DAT_003f9f40 == 1 || (_DAT_003f9f40 == 2)) || (_DAT_003f9f40 == 4))))
      {
        if (sVar3 == 0x45) {
          if (_DAT_003f9f40 == 1) {
            if (2 < _DAT_003f9f48) {
              uVar8 = 0;
              pbVar9 = &UNK_003f9f7b;
              do {
                pbVar9 = pbVar9 + 1;
                *pbVar9 = (*param_2)[uVar8 + 1];
                uVar8 = uVar8 + 1;
              } while (uVar8 < 0x44);
              _DAT_003f9f40 = 2;
              uVar6 = 8;
              goto LAB_00102f70;
            }
            _DAT_003f9f40 = 4;
            _DAT_003f9f44 = 0;
          }
          if (_DAT_003f9f40 == 2) {
            if (_DAT_003ffff0 != 2) {
              uVar6 = 8;
              goto LAB_00102f70;
            }
            if (DAT_003fbd5c == '\0') {
              uVar6 = 8;
              goto LAB_00102f70;
            }
            _();
            uVar8 = _DAT_003f9f48;
            if (_DAT_003f9f48 == 5) {
              uVar8 = 4;
            }
            _DAT_003f9f44 = FUN_00104560(&DAT_003f9f50,&DAT_003f9f4c,0xffe029,uVar8,&DAT_003f9f7c,0)
            ;
            _DAT_003f9f40 = 4;
          }
          if (_DAT_003f9f40 != 4) {
            return;
          }
          _DAT_003f9f40 = 0xff;
          **param_2 = 8;
          if (_DAT_003f9f44 != 0) {
            DAT_003fffa6 = '\0';
          }
          else {
            _DAT_003fff80 = 0xaabffb11;
            DAT_003fffa6 = (char)_DAT_003f9f48;
          }
          (*param_2)[1] = _DAT_003f9f44 == 0;
          FUN_0010ad8c(DAT_003fffa6);
          goto LAB_00102e78;
        }
        bVar4 = 0x12;
      }
      else {
        bVar4 = 0x22;
      }
      _DAT_003f9f40 = 0xff;
    }
    else {
      if (bVar4 == 2) {
        if (DAT_003f9fc0 == '\x12') goto LAB_00102c38;
        if (DAT_003fffa6 == '\x03') {
          if (sVar3 == 8) {
            if (DAT_003fffcf == '\x02') {
              bVar4 = 1;
            }
            else {
              if (DAT_003fffcf != '\x12') {
                if (DAT_003f9fc0 == '\b') {
                  DAT_003f9fc0 = 0x12;
                  *(undefined *)((int)param_2 + 10) = 6;
                  if (DAT_003f9fc1 == '\x01') {
                    FUN_00104370();
                    sVar3 = FUN_00101328(0xf002ac,5);
                  }
                  else {
                    if (DAT_003f9fc1 != '\x02') {
                      DAT_003fffcf = 0x12;
                      return;
                    }
                    FUN_00104370();
                    sVar3 = FUN_00101328(0xf002a4,1);
                  }
                  if (sVar3 != 0) {
                    DAT_003fffcf = 0x12;
                    return;
                  }
                  DAT_003fffcf = 2;
                  return;
                }
                DAT_003f9fc0 = '\0';
                DAT_003f9fc1 = '\0';
                pbVar9 = *param_2;
                uVar8 = (uint)pbVar9[1] * 0x10000 + (uint)pbVar9[2] * 0x100 + (uint)pbVar9[3];
                if (((uVar8 < 0x8000) || (0x6ffff < uVar8)) &&
                   ((uVar8 < 0xf10000 || (0xfbffff < uVar8)))) {
                  if ((uVar8 < 0xfc0000) || (0xfdffff < uVar8)) goto LAB_00102e88;
                  iVar2 = FUN_00103d40();
                  if (((iVar2 == 0) || (iVar2 = FUN_00103e70(), iVar2 == 0)) ||
                     ((iVar2 = FUN_00103c38(), iVar2 == 0 ||
                      ((iVar2 = FUN_00103e04(), iVar2 != 0 && (iVar2 = FUN_00104148(), iVar2 != 0)))
                      ))) {
                    iVar2 = FUN_00103e04();
                    if ((iVar2 == 0) ||
                       (((iVar2 = FUN_00103e70(), iVar2 == 0 || (iVar2 = FUN_00103d98(), iVar2 != 0)
                         ) || (iVar2 = FUN_00104148(), iVar2 == 0)))) {
                      bVar4 = 7;
                    }
                    else {
                      bVar4 = 5;
                    }
                    (*param_2)[1] = bVar4;
                    **param_2 = 2;
                    goto LAB_00102e78;
                  }
                  DAT_003f9fc1 = '\x02';
                }
                else {
                  iVar2 = FUN_00103e04();
                  if (((iVar2 != 0) && (iVar2 = FUN_00103e70(), iVar2 != 0)) &&
                     (iVar2 = FUN_00103d98(), iVar2 != 0)) {
                    bVar7 = 8;
                    goto LAB_00102d5c;
                  }
                  iVar2 = FUN_00103e04();
                  if ((((iVar2 == 0) && (iVar2 = FUN_00103e70(), iVar2 != 0)) &&
                      (iVar2 = FUN_00103c90(), iVar2 == 0)) && (iVar2 = FUN_00103bf4(), iVar2 == 0))
                  {
                    bVar7 = 8;
                    goto LAB_00102da4;
                  }
                  DAT_003f9fc1 = '\x01';
                }
                DAT_003f9fc0 = '\b';
                **param_2 = 0x23;
                *(undefined2 *)(param_2 + 2) = 1;
                uVar6 = 5;
                goto LAB_00102f70;
              }
              bVar4 = 2;
            }
            DAT_003fffcf = '\0';
            **param_2 = 2;
            (*param_2)[1] = bVar4;
            goto LAB_00102e78;
          }
          bVar4 = 0x12;
        }
        else {
          bVar4 = 0x33;
        }
LAB_00102e90:
        **param_2 = bVar4;
        *(undefined2 *)(param_2 + 2) = 1;
        uVar6 = 2;
        goto LAB_00102f70;
      }
      if (bVar4 != 7) goto LAB_00102f50;
      if (nmot_w == 0) {
        if (sVar3 == 6) {
          _DAT_003f9f40 = 1;
          _DAT_003f9f48 = (uint)(*param_2)[1];
          DAT_003f9f4c = (*param_2)[2];
          DAT_003f9f4d = (*param_2)[3];
          DAT_003f9f4e = (*param_2)[4];
          DAT_003f9f4f = (*param_2)[5];
          FUN_00102504();
          FUN_00105e98(8,&DAT_003f9f50);
          pbVar9 = *param_2;
          *pbVar9 = 7;
          uVar8 = 0;
          do {
            pbVar9 = pbVar9 + 1;
            *pbVar9 = (&DAT_003f9f50)[uVar8];
            uVar8 = uVar8 + 1 & 0xffff;
          } while (uVar8 < 8);
          *(undefined2 *)(param_2 + 2) = 9;
          uVar6 = 1;
          goto LAB_00102f70;
        }
        _DAT_003f9f40 = 0xff;
        goto LAB_001028b0;
      }
      _DAT_003f9f40 = 0xff;
      bVar4 = 0x22;
    }
LAB_00102f58:
    **param_2 = bVar4;
    uVar6 = 2;
  }
  else {
    if (bVar4 != 9) {
      if ((bVar4 == 10) && (sVar3 == 1)) {
        **param_2 = 10;
        bVar4 = FUN_00103f38();
        (*param_2)[1] = bVar4;
        goto LAB_00102e78;
      }
LAB_00102f50:
      bVar4 = 0x12;
      goto LAB_00102f58;
    }
    if (DAT_003f9fc0 == '\x12') {
LAB_00102c38:
      DAT_003f9fc0 = '\0';
      uVar6 = 3;
      goto LAB_00102f70;
    }
    if (sVar3 != 2) {
LAB_001028b0:
      bVar4 = 0x12;
      goto LAB_00102f58;
    }
    if (DAT_003fffcf == '\t') {
      DAT_003fffcf = '\0';
      bVar7 = 1;
LAB_00102da4:
      **param_2 = bVar4;
      (*param_2)[1] = bVar7;
LAB_00102e78:
      *(undefined2 *)(param_2 + 2) = 2;
      uVar6 = 1;
      goto LAB_00102f70;
    }
    if (DAT_003fffcf == '\x19') {
      DAT_003fffcf = '\0';
      bVar7 = 0;
LAB_00102d5c:
      **param_2 = bVar4;
      (*param_2)[1] = bVar7;
      goto LAB_00102e78;
    }
    if (DAT_003f9fc0 == '\x10') {
      DAT_003f9fc0 = '\x12';
      if (DAT_003f9f58 != 2) {
        if (DAT_003f9f58 != 4) goto LAB_00102e88;
        uVar8 = 0;
        iVar2 = 0x1c0000;
        if (DAT_001c0180 != 0) {
          puVar5 = &uStack_54;
          piVar1 = &iStack_3c;
          do {
            puVar5 = puVar5 + 1;
            *puVar5 = *(undefined4 *)(iVar2 + 0x184);
            piVar1 = piVar1 + 1;
            *piVar1 = (*(int *)(iVar2 + 0x188) - *(int *)(iVar2 + 0x184)) + 1;
            iVar2 = iVar2 + 8;
            uVar8 = uVar8 + 1;
          } while (uVar8 < DAT_001c0180);
        }
        bVar4 = FUN_001048c0(DAT_001c0180,local_50,local_38,DAT_001c0014);
        (*param_2)[1] = bVar4;
        _DAT_003f9fe4 = &LAB_001c0080;
        if (_LAB_001c0080 == -1) {
          if ((*param_2)[1] == 0) {
            FUN_00104370();
            puVar5 = (undefined4 *)&DAT_003f9fe8;
            _DAT_003f9fe8 = 0xaffe0815;
            iVar2 = 0xf;
            do {
              puVar5 = puVar5 + 1;
              *puVar5 = 0;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            func_0xff7bd004(DAT_001c0008,0x40,&DAT_003f9fe8,0);
            goto LAB_00102bfc;
          }
LAB_00102c14:
          DAT_003fffcf = '\x19';
        }
        else {
LAB_00102bfc:
          if ((*param_2)[1] != 0) goto LAB_00102c14;
          DAT_003fffcf = '\t';
        }
        uVar6 = 6;
        goto LAB_00102f70;
      }
      iVar2 = FUN_00103af4();
      if (iVar2 == 0) {
        uVar8 = 0;
        if (_DAT_00f00180 != 0) {
          puVar5 = &uStack_54;
          iVar2 = 0xf00000;
          piVar1 = &iStack_3c;
          do {
            puVar5 = puVar5 + 1;
            *puVar5 = *(undefined4 *)(iVar2 + 0x184);
            piVar1 = piVar1 + 1;
            *piVar1 = (*(int *)(iVar2 + 0x188) - *(int *)(iVar2 + 0x184)) + 1;
            iVar2 = iVar2 + 8;
            uVar8 = uVar8 + 1;
          } while (uVar8 < _DAT_00f00180);
        }
        bVar4 = FUN_001048c0(_DAT_00f00180,local_50,local_38,_DAT_00f00014);
        (*param_2)[1] = bVar4;
LAB_00102aec:
        if ((*param_2)[1] != 0) goto LAB_00102b04;
        DAT_003fffcf = '\t';
      }
      else {
        uVar8 = 0;
        iVar2 = 0x1c0000;
        if (DAT_001c01c4 != 0) {
          puVar5 = &uStack_54;
          piVar1 = &iStack_3c;
          do {
            puVar5 = puVar5 + 1;
            *puVar5 = *(undefined4 *)(iVar2 + 0x1c8);
            piVar1 = piVar1 + 1;
            *piVar1 = (*(int *)(iVar2 + 0x1cc) - *(int *)(iVar2 + 0x1c8)) + 1;
            iVar2 = iVar2 + 8;
            uVar8 = uVar8 + 1;
          } while (uVar8 < DAT_001c01c4);
        }
        bVar4 = FUN_001048c0(DAT_001c01c4,local_50,local_38,DAT_001c0014 + 0xc0000);
        (*param_2)[1] = bVar4;
        _DAT_003f9fe4 = &LAB_001c0080;
        if (_LAB_001c0080 != -1) goto LAB_00102aec;
        if ((*param_2)[1] == 0) {
          FUN_00104370();
          puVar5 = (undefined4 *)&DAT_003f9fe8;
          _DAT_003f9fe8 = 0xaffe0815;
          iVar2 = 0xf;
          do {
            puVar5 = puVar5 + 1;
            *puVar5 = 0;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          func_0xff7bd004(DAT_001c0008 + 0xc0000,0x40,&DAT_003f9fe8,0);
          FUN_0010c798();
          FUN_005bc8c8();
          goto LAB_00102aec;
        }
LAB_00102b04:
        DAT_003fffcf = '\x19';
      }
      uVar6 = 6;
      goto LAB_00102f70;
    }
    bVar4 = (*param_2)[1];
    if ((bVar4 != 2) && (bVar4 != 4)) {
LAB_00102e88:
      bVar4 = 0x12;
      goto LAB_00102e90;
    }
    DAT_003f9fc0 = '\x10';
    DAT_003f9f58 = bVar4;
    **param_2 = 0x23;
    uVar6 = 5;
  }
  *(undefined2 *)(param_2 + 2) = 1;
LAB_00102f70:
  *(undefined *)((int)param_2 + 10) = uVar6;
  return;
}

