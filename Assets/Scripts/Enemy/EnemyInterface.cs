using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface EnemyInterface 
{
    //������ ��. �ٽ� ����
    public void AttackEnd();

    //���� ������
    public void Hit(PlayerController target, float dmg, bool stop);
    //���� �ޱ� ������ ����. ����ó�� �ϰų�, ���߱�
    public void HitEnd();

    public void Die();
    public void DieEnd();
}
