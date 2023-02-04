using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface BossInterface
{
    public void Attack(); //원거리 공격
    public void Attack3(); // 오크: 윈드밀
    public void Aoe(); // 오크: 샤우팅

    //공격 받을때
    public void Hit(float dmg);

    //무적
    public void Invincible();

    public void Die();
    public void DieEnd();
}
