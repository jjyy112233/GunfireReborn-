using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface BossInterface
{
    public void Attack(); //���Ÿ� ����
    public void Attack3(); // ��ũ: �����
    public void Aoe(); // ��ũ: ������

    //���� ������
    public void Hit(float dmg);

    //����
    public void Invincible();

    public void Die();
    public void DieEnd();
}
