# Generated by Django 3.1.7 on 2021-05-25 17:50

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('classroom', '0007_change_salary_demand'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='change_salary_demand',
            name='message',
        ),
        migrations.AddField(
            model_name='change_salary_demand',
            name='salary',
            field=models.CharField(default=1, max_length=20),
            preserve_default=False,
        ),
        migrations.AlterField(
            model_name='change_salary_demand',
            name='TeacherName',
            field=models.CharField(max_length=50),
        ),
    ]
