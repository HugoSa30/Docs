/*
 * Program: n42.bin
 * Function: FUN_00101f58
 * Entry: 00101f58
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00101f58(undefined4 param_1,char **param_2)

{
  char *pcVar1;
  char cVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  undefined uVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint *puVar12;
  
  cVar2 = *(char *)(param_2 + 3);
  if (*(short *)((int)param_2 + 6) != 1) goto switchD_00072138_caseD_20;
  if (cVar2 == -0x7f) {
    pcVar4 = *param_2;
    *pcVar4 = -0x7f;
    pcVar4[1] = '\x05';
    pcVar4[2] = -0x72;
    pcVar4[3] = '\x0f';
    pcVar4[4] = '\x0f';
    pcVar4[5] = '\x01';
    pcVar4[6] = -1;
    *(undefined2 *)(param_2 + 2) = 7;
    uVar6 = 1;
    goto LAB_00102354;
  }
  if (cVar2 == -0x72) {
    pcVar4 = *param_2;
    *pcVar4 = -0x72;
    pcVar4[1] = '\x03';
    pcVar4[2] = (char)((ushort)_DAT_00007fde >> 8);
    pcVar4[3] = (char)_DAT_00007fde;
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    pcVar4[8] = '\0';
    pcVar4[9] = '\0';
    pcVar4[10] = '\0';
    pcVar4[0xb] = '\0';
    pcVar4[0xc] = '\0';
    pcVar4[0xd] = '\a';
    pcVar4[0xe] = '\0';
    pcVar4[0xf] = '\0';
    pcVar4[0x10] = -0x10;
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
    pcVar4[0x14] = '\0';
    pcVar4[0x15] = '\x10';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
    pcVar4[0x18] = '\0';
    pcVar4[0x19] = '\0';
    pcVar4[0x1a] = '\0';
    pcVar4[0x1b] = '\0';
    pcVar4[0x1c] = '\0';
    pcVar4[0x1d] = '\0';
    pcVar4[0x1e] = '\0';
    pcVar4[0x1f] = '\0';
    *(undefined2 *)(param_2 + 2) = 0x20;
    uVar6 = 1;
    goto LAB_00102354;
  }
  iVar5 = 0;
  if ((((cVar2 == -0x7a) || (cVar2 == -0x70)) || (cVar2 == -0x67)) ||
     ((cVar2 == -0x6a || (cVar2 == -0x68)))) {
    puVar12 = (uint *)&DAT_00ffe200;
    bVar7 = 0xff;
    do {
      bVar11 = bVar7;
      uVar9 = 0xffffffff;
      bVar7 = 0;
      puVar3 = puVar12 + -1;
      do {
        puVar12 = puVar3;
        puVar3 = puVar12 + 1;
        uVar9 = uVar9 & *puVar3;
        bVar7 = bVar7 + 1;
      } while (bVar7 < 0x10);
      puVar12 = puVar12 + 2;
      bVar7 = bVar11 + 1;
    } while ((uVar9 != 0xffffffff) && (bVar7 < 0xf));
    if (bVar7 != 0) {
      iVar5 = (uint)bVar11 << 6;
    }
  }
  switch(cVar2) {
  case -0x80:
    uVar9 = 2;
    uVar10 = 10;
    break;
  case -0x7f:
    goto switchD_00072138_caseD_20;
  case -0x7e:
    goto switchD_00072138_caseD_20;
  case -0x7d:
    goto switchD_00072138_caseD_20;
  case -0x7c:
    goto switchD_00072138_caseD_20;
  case -0x7b:
    goto switchD_00072138_caseD_20;
  case -0x7a:
    uVar9 = 0xe;
    uVar10 = 0x19;
    break;
  case -0x79:
    uVar9 = 10;
    uVar10 = 0xb;
    break;
  case -0x78:
    goto switchD_00072138_caseD_20;
  case -0x77:
    uVar9 = 0xb;
    uVar10 = 0xc;
    break;
  case -0x76:
    goto switchD_00072138_caseD_20;
  case -0x75:
    goto switchD_00072138_caseD_20;
  case -0x74:
    goto switchD_00072138_caseD_20;
  case -0x73:
    goto switchD_00072138_caseD_20;
  case -0x72:
    goto switchD_00072138_caseD_20;
  case -0x71:
    goto switchD_00072138_caseD_20;
  case -0x70:
    uVar9 = 0xf;
    uVar10 = 0x10;
    break;
  case -0x6f:
    uVar9 = 0;
    uVar10 = 3;
    break;
  case -0x6e:
    uVar9 = 0xc;
    uVar10 = 0xd;
    break;
  case -0x6d:
    goto switchD_00072138_caseD_20;
  case -0x6c:
    uVar9 = 0xd;
    uVar10 = 0xe;
    break;
  case -0x6b:
    goto switchD_00072138_caseD_20;
  case -0x6a:
    uVar9 = 0x13;
    uVar10 = 0x14;
    break;
  case -0x69:
    uVar9 = 6;
    uVar10 = 7;
    break;
  case -0x68:
    uVar9 = 0x14;
    uVar10 = 0x15;
    break;
  case -0x67:
    uVar9 = 0x10;
    uVar10 = 0x11;
    break;
  case -0x66:
    uVar9 = 3;
    uVar10 = 4;
    break;
  case -0x65:
    uVar9 = 4;
    uVar10 = 5;
    break;
  case -100:
    uVar9 = 5;
    uVar10 = 6;
    break;
  case -99:
    uVar9 = 7;
    uVar10 = 8;
    break;
  case -0x62:
    uVar9 = 8;
    uVar10 = 9;
    break;
  case -0x61:
    uVar9 = 9;
    uVar10 = 10;
    break;
  default:
    goto switchD_00072138_caseD_20;
  }
  if (uVar10 == 0) {
switchD_00072138_caseD_20:
    **param_2 = '\x12';
    *(undefined2 *)(param_2 + 2) = 1;
    uVar6 = 2;
  }
  else {
    pcVar4 = *param_2;
    *pcVar4 = cVar2;
    pcVar4 = pcVar4 + 1;
    uVar8 = 1;
    for (; uVar9 < uVar10; uVar9 = uVar9 + 1 & 0xff) {
      bVar7 = 0;
      if (*(char *)(uVar9 * 8 + 0xf02434) != '\0') {
        pcVar1 = pcVar4 + -1;
        do {
          pcVar4 = pcVar1;
          pcVar1 = pcVar4 + 1;
          *pcVar1 = *(char *)(*(int *)(uVar9 * 8 + 0xf02438) + (uint)bVar7 + iVar5);
          uVar8 = uVar8 + 1;
          bVar7 = bVar7 + 1;
        } while (bVar7 < *(byte *)(uVar9 * 8 + 0xf02434));
        pcVar4 = pcVar4 + 2;
      }
    }
    *(ushort *)(param_2 + 2) = uVar8 & 0xff;
    uVar6 = 1;
  }
LAB_00102354:
  *(undefined *)((int)param_2 + 10) = uVar6;
  return;
}

