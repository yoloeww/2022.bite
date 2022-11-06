while (A && prev)
		{
			if (A->val != prev->val)
				return false;
			A = A->next;
			prev = prev->next;
		}
		return true;
	}
};
