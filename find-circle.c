#include	<stdio.h>
#include	<math.h>

#define	M_TAU	(M_PI * 2.0)

/* Finding the circumference or radius of a circle (arbitrarily decided in terms of meters)
 * -skibidi rizzler
 * */

/* Steps to finishing project:
 * Get Pi to correctly output Pi !)
 * Calculate the circumference of a circle !)
 * Calculate the radius of a circle !)
 * Calculate the diameter of a circle !)
 * Let the user input their own values for circumference/radius/diameter of a circle in terms of meters !)
 * Make an options menu that lets the user choose whether they want to find the circumference/radius/diameter of a circle !)
 * Laugh at them if their circle is smaller than twenty meters in diameter !) */

int main()
{
	float circle_radius;
	float circle_circumference;
	float circle_area;
	char nl;
	unsigned short mode;
	
	int notfloat()
	{
		printf("You must put a numeric value. Exited.\n");
		return 0;
	}

	printf("Tool for finding units of a circle in terms of meters.\nSelect from an option below:\n");
	printf("[1]\tFind circumference (from radius)\n[2]\tFind radius (from circumference)\n[3]\tFind Diameter (from radius)\n[4]\tFind area of a circle (from radius)\nAny other key to exit\n");
	if (scanf("%hu%c", &mode, &nl) == 2 && nl == '\n')
	{
		if (mode == 1)
		{
			/* Circumference mode */
			printf("Please put the radius of your circle you want to find the circumference of:\n");
			
			if (scanf("%f%c", &circle_radius, &nl) == 2 && nl == '\n')
			{
				circle_circumference = circle_radius * M_TAU;
				
				printf("Your circle's circumference is %f meters.\n", circle_circumference);
				
				if (circle_circumference <= 20.0)
				{
					printf("Small ass circle lmao\n");
				}
				return 0;
			}
			else
			{
				notfloat();
			}
		}

		if (mode == 2)
		{
			/* Radius mode */
			printf("Please put the circumference of your circle you want to find the radius of:\n");

			if (scanf("%f%c", &circle_circumference, &nl) == 2 && nl == '\n')
			{
				circle_radius = circle_circumference / M_TAU;

				printf("Your circle's radius is %f in meters.\n", circle_radius);
				return 0;
			}
			else
			{
				notfloat();
			}
		}

		if (mode == 3)
		{
			/* Diameter mode */
			printf("Please put the radius of your circle you want to find the diameter of:\n");

			if (scanf("%f%c", &circle_radius, &nl) == 2 && nl == '\n')
			{
				circle_radius *= 2.0;

				printf("Your circle's diameter is %f in meters.\n", circle_radius);
				return 0;
			}
			else
			{
				notfloat();
			}
		}

		if (mode == 4)
		{
			/* Area mode */
			printf("Please put the radius of your circle you want to find the area of:\n");

			if (scanf("%f%c", &circle_radius, &nl) == 2 && nl == '\n')
			{
				circle_area = M_PI * pow(circle_radius, 2);

				printf("Your circle's area is %f in meters.\n", circle_area);
				return 0;
			}
			else
			{
				notfloat();
			}
		}
	}
	else
	{
		return 0;
	}
}

