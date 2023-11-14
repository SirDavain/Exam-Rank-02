typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*fptr;

	fptr = begin_list;
	while (fptr)
	{
		(*f)(fptr->data);
		fptr = fptr->next;
	}
}